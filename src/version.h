// Copyright (c) 2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include "clientversion.h"
#include <string>

//
// client versioning
//

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD; 

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

// PoSV
// database format versioning for checkpoints
static const int DATABASE_VERSION = 80000;

// PoSV
// nTime field added to CTransaction
// vchBlockSig field added to CBlock
static const int POW_CLIENT_VERSION = 2000000;
static const int POW_PROTOCOL_VERSION = 2000000;
static const int POW_TX_VERSION = 1;
static const int POW_BLOCK_VERSION = 2;

// network protocol versioning
//
static const int PROTOCOL_VERSION = 2000001;

// intial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

// disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION = 2000000;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 1000000;

// "mempool" command, enhanced "getdata" behavior starts with this version:
static const int MEMPOOL_GD_VERSION = 1000001;

#endif
