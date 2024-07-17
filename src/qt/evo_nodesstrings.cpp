

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *evo_nodes_strings[] = {
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Cannot find the Sapling parameters in the following directory:\n"
"%s"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Cannot provide specific connections and have addrman find outgoing "
"connections at the same."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Cannot start deterministic masternode before enforcement. Remove %s to start "
"as legacy masternode"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Cannot upgrade to Sapling wallet (already running Sapling support). Version: "
"%d"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Enabling Masternode support requires turning on transaction indexing.Please "
"add %s to your configuration and start with %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Error: Unsupported argument %s found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Failed to create backup, file already exists! This could happen if you "
"restarted wallet in less than 60 seconds. You can continue if you are ok "
"with this."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Invalid -wallet path '%s'. -wallet path should point to a directory where "
"wallet.dat and database/log.?????????? files can be stored, a location where "
"such a directory could be created or (for backwards compatibility) the name "
"of an existing data file in -walletdir (%s)"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Invalid amount for %s: '%s' (must be at least the minimum relay fee of %s to "
"prevent stuck transactions)"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Legacy masternode system disabled. Use %s to start as deterministic "
"masternode"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong %s will not work properly."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"System error while flushing the chainstate after pruning invalid entries. "
"Possible corrupt database."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"This file contains all of your private keys in plain text. DO NOT send this "
"file to anyone!"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of %s."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Unable to replay blocks. You will need to rebuild the database using %s."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"WARNING: The transaction has been signed and recorded, so the wallet will "
"try to re-send it. Use 'abandontransaction' to cancel it. (txid: %s)"),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Warning: %s is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Warning: %s is set very high! This is the transaction fee you will pay if "
"you send a transaction."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong %s will not work properly."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"Warning: error reading %s! All keys read correctly, but transaction data or "
"address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("evo_nodes-core", ""
"\"local\" vote is no longer available with DMNs. Use \"alias\" from the "
"wallet with the voting key."),
QT_TRANSLATE_NOOP("evo_nodes-core", "%s Invalid %s address or hostname: '%s'"),
QT_TRANSLATE_NOOP("evo_nodes-core", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("evo_nodes-core", "%s is not allowed in combination with enabled wallet functionality"),
QT_TRANSLATE_NOOP("evo_nodes-core", "%s is only allowed with a single wallet file"),
QT_TRANSLATE_NOOP("evo_nodes-core", "(must be %d for %s-net)"),
QT_TRANSLATE_NOOP("evo_nodes-core", "A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Active Masternode not initialized."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Calculating money supply..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Can't generate a change-address key. Please call keypoolrefill first."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Cannot be a masternode and only connect to specific nodes"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Cannot downgrade wallet."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Cannot set %s or %s together with %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Cannot upgrade a locked wallet."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Cannot write to data directory '%s'; check permissions."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Change index out of range"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Copyright (C) 2015-%i The %s Developers"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Could not find asmap file %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Could not open debug log file %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Could not parse asmap file %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Deterministic masternodes are not enforced yet"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Done loading"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Elliptic curve cryptography sanity check failure. Aborting."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error loading %s\n"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error loading block database"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error loading wallet %s. Duplicate %s filename specified."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error opening block database"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error reading masternode configuration file: %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error: %s must be at least %d MB"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error: %s must be true if %s is set."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error: Disk space is low for %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error: Initializing networking failed"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error: Unsupported argument %s found, use %s."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Error: Unsupported argument %s found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Failed to accept tx in the memory pool (reason: %s)\n"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Failed to clear masternode metadata cache at: %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Failed to delete backup, error: %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Failed to load masternode metadata cache from: %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Failed to rescan the wallet during initialization"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Importing..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Information"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid -masternodeaddr address: %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid -masternodeaddr port %d, isn't the same as the peer port %d"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid -masternodeaddr port %d, only %d is supported on %s-net."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid activation height (%s)"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid amount for %s: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid masternodeprivkey. Please see the documentation."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid mnoperatorprivatekey. Please see the documentation."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid netmask specified in %s: '%s'"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid network upgrade (%s)"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid port %d detected in masternode.conf"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Invalid status error."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Keypool ran out, please call keypoolrefill first, or unlock the wallet."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Legacy Masternode is obsolete."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Line: %d"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading block index..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading network requests cache..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Loading/Pruning invalid outputs..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "MNs synchronization pending..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Masternode must be able to handle at least %d connections, set %s=%d"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Need to specify a port with %s: '%s'"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Network upgrade parameters malformed, expecting %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Network upgrade parameters may only be overridden on regtest."),
QT_TRANSLATE_NOOP("evo_nodes-core", "No error"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("evo_nodes-core", "OS cryptographic RNG sanity check failure. Aborting."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Peers are being disconnected due time differences."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Please copy the included params files to the %s directory."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Please run the included %s script and then restart."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Reaccepting wallet transactions..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Replaying blocks..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Rescanning..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Shutdown requested over the txs scan. Exiting."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Specified -walletdir \"%s\" does not exist"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Specified -walletdir \"%s\" is a relative path"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Specified -walletdir \"%s\" is not a directory"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Specified blocks directory \"%s\" does not exist."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "The threshold value cannot be less than %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "This is experimental software."),
QT_TRANSLATE_NOOP("evo_nodes-core", "This is not a deterministic masternode. 'local' option disabled."),
QT_TRANSLATE_NOOP("evo_nodes-core", "This is not a masternode. 'local' option disabled."),
QT_TRANSLATE_NOOP("evo_nodes-core", "This is not a masternode."),
QT_TRANSLATE_NOOP("evo_nodes-core", "This product includes UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Transaction canceled."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Transaction too large"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Unable to create the PID file '%s': %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Unable to generate initial key!"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Unable to generate keys"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Unknown network specified in %s: '%s'"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Upgrading coins database if needed..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Verifying wallet(s)..."),
QT_TRANSLATE_NOOP("evo_nodes-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Warning"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Warning: Unsupported argument %s ignored, use %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Warning: Unsupported argument %s ignored, use %s."),
QT_TRANSLATE_NOOP("evo_nodes-core", "You need to rebuild the database using %s to change %s"),
QT_TRANSLATE_NOOP("evo_nodes-core", "Zapping all transactions from wallet..."),
};
