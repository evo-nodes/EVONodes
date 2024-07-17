Sample init scripts and service configuration for evo_nodesd
==========================================================

Sample scripts and configuration files for systemd, Upstart and OpenRC
can be found in the contrib/init folder.

    contrib/init/evo_nodesd.service:    systemd service unit configuration
    contrib/init/evo_nodesd.openrc:     OpenRC compatible SysV style init script
    contrib/init/evo_nodesd.openrcconf: OpenRC conf.d file
    contrib/init/evo_nodesd.conf:       Upstart service configuration file
    contrib/init/evo_nodesd.init:       CentOS compatible SysV style init script

Service User
---------------------------------

All three Linux startup configurations assume the existence of a "evo_nodes" user
and group.  They must be created before attempting to use these scripts.
The macOS configuration assumes evo_nodesd will be set up for the current user.

Configuration
---------------------------------

At a bare minimum, evo_nodesd requires that the rpcpassword setting be set
when running as a daemon.  If the configuration file does not exist or this
setting is not set, evo_nodesd will shutdown promptly after startup.

This password does not have to be remembered or typed as it is mostly used
as a fixed token that evo_nodesd and client programs read from the configuration
file, however it is recommended that a strong and secure password be used
as this password is security critical to securing the wallet should the
wallet be enabled.

If evo_nodesd is run with the "-server" flag (set by default), and no rpcpassword is set,
it will use a special cookie file for authentication. The cookie is generated with random
content when the daemon starts, and deleted when it exits. Read access to this file
controls who can access it through RPC.

By default the cookie is stored in the data directory, but it's location can be overridden
with the option '-rpccookiefile'.

This allows for running evo_nodesd without having to do any manual configuration.

`conf`, `pid`, and `wallet` accept relative paths which are interpreted as
relative to the data directory. `wallet` *only* supports relative paths.

For an example configuration file that describes the configuration settings,
see contrib/debian/examples/evonodes.conf.

Paths
---------------------------------

### Linux

All three configurations assume several paths that might need to be adjusted.

Binary:              /usr/bin/evo_nodesd
Configuration file:  /etc/evo_nodes/evonodes.conf
Data directory:      /var/lib/evo_nodesd
PID file:            `/var/run/evo_nodesd/evo_nodesd.pid` (OpenRC and Upstart) or `/run/evo_nodesd/evo_nodesd.pid` (systemd)
Lock file:           `/var/lock/subsys/evo_nodesd` (CentOS)

The configuration file, PID directory (if applicable) and data directory
should all be owned by the evo_nodes user and group.  It is advised for security
reasons to make the configuration file and data directory only readable by the
evo_nodes user and group.  Access to evo_nodes-cli and other evo_nodesd rpc clients
can then be controlled by group membership.

NOTE: When using the systemd .service file, the creation of the aforementioned
directories and the setting of their permissions is automatically handled by
systemd. Directories are given a permission of 710, giving the evo_nodes group
access to files under it _if_ the files themselves give permission to the
evo_nodes group to do so (e.g. when `-sysperms` is specified). This does not allow
for the listing of files under the directory.

NOTE: It is not currently possible to override `datadir` in
`/etc/evo_nodes/evonodes.conf` with the current systemd, OpenRC, and Upstart init
files out-of-the-box. This is because the command line options specified in the
init files take precedence over the configurations in
`/etc/evo_nodes/evonodes.conf`. However, some init systems have their own
configuration mechanisms that would allow for overriding the command line
options specified in the init files (e.g. setting `BITCOIND_DATADIR` for
OpenRC).

### macOS

Binary:              `/usr/local/bin/evo_nodesd`
Configuration file:  `~/Library/Application Support/ EVO_Nodes/evonodes.conf`
Data directory:      `~/Library/Application Support/ EVO_Nodes`
Lock file:           `~/Library/Application Support/ EVO_Nodes/.lock`

Installing Service Configuration
-----------------------------------

### systemd

Installing this .service file consists of just copying it to
/usr/lib/systemd/system directory, followed by the command
`systemctl daemon-reload` in order to update running systemd configuration.

To test, run `systemctl start evo_nodesd` and to enable for system startup run
`systemctl enable evo_nodesd`

NOTE: When installing for systemd in Debian/Ubuntu the .service file needs to be copied to the /lib/systemd/system directory instead.

### OpenRC

Rename evo_nodesd.openrc to evo_nodesd and drop it in /etc/init.d.  Double
check ownership and permissions and make it executable.  Test it with
`/etc/init.d/evo_nodesd start` and configure it to run on startup with
`rc-update add evo_nodesd`

### Upstart (for Debian/Ubuntu based distributions)

Upstart is the default init system for Debian/Ubuntu versions older than 15.04. If you are using version 15.04 or newer and haven't manually configured upstart you should follow the systemd instructions instead.

Drop evo_nodesd.conf in /etc/init.  Test by running `service evo_nodesd start`
it will automatically start on reboot.

NOTE: This script is incompatible with CentOS 5 and Amazon Linux 2014 as they
use old versions of Upstart and do not supply the start-stop-daemon utility.

### CentOS

Copy evo_nodesd.init to /etc/init.d/evo_nodesd. Test by running `service evo_nodesd start`.

Using this script, you can adjust the path and flags to the evo_nodesd program by
setting the  EVO_NodesD and FLAGS environment variables in the file
/etc/sysconfig/evo_nodesd. You can also use the DAEMONOPTS environment variable here.

### macOS

Copy org.evo_nodes.evo_nodesd.plist into ~/Library/LaunchAgents. Load the launch agent by
running `launchctl load ~/Library/LaunchAgents/org.evo_nodes.evo_nodesd.plist`.

This Launch Agent will cause evo_nodesd to start whenever the user logs in.

NOTE: This approach is intended for those wanting to run evo_nodesd as the current user.
You will need to modify org.evo_nodes.evo_nodesd.plist if you intend to use it as a
Launch Daemon with a dedicated evo_nodes user.

Auto-respawn
-----------------------------------

Auto respawning is currently only configured for Upstart and systemd.
Reasonable defaults have been chosen but YMMV.
