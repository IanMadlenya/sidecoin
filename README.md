## Sidecoin

[![Build Status](https://travis-ci.org/AugurProject/sidecoin.svg?branch=master)](https://travis-ci.org/AugurProject/sidecoin)

![Bitcoin sidecar](https://raw.githubusercontent.com/AugurProject/sidecoin/master/src/qt/res/images/splash.png)

The sidecar to Bitcoin's motorcycle.

Sidecoin is a fork of Bitcoin v. 0.9.1 that allows you to take a snapshot of Bitcoin's current distribution and load it into a new blockchain.  Want to know more?  Check out our [whitepaper](http://augur.link/sidecoin.pdf)!

Our Bitcoin [snapshot](http://augur.link/snapshotToImport.txt.gz).

Ports:

    - P2P port: 6543 (16543 for testnet)
    - RPC port: 6544 (16544 for testnet)

### Installation

If you're on a somewhat recent version of Ubuntu, you can install using:

    $ ./install.sh

### OS X Build Instructions

Use brew to get boost.

Install using:

	./autogen.sh
	sudo ./configure --with-boost=/usr/local/Cellar/boost/1.55.0_2/ --with-incompatible-bdb --with-qt
	make

Make the `sidecoin` directory in `/Users/username/Library/Application\ Support/Sidecoin`

Copy the `sidecoin.conf` file to that directory.  Then create a directory in that directory called `balances` and place the `balances.txt` file inside.

Questions?  Email Joey (joey@augur.net) or Jack (jack@augur.net).
