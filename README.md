BITCREXCOIN Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/BITCREXCOIN/BITCREXCOIN.svg?branch=master)](https://travis-ci.org/BITCREXCOIN/BITCREXCOIN) [![GitHub version](https://badge.fury.io/gh/BITCREXCOIN%2FBITCREXCOIN.svg)](https://badge.fury.io/gh/BITCREXCOIN-Project%2FBITCREXCOIN)

BITCREXCOIN is an open source crypto-currency focused on fast private transactions using the Zerocoin protocol, with low transaction fees & environmental footprint.  It utilizes the first ever anonymous proof of stake protocol, called zPoS, combined with regular PoS and masternodes for securing its network. zPoS incentivises using the privacy features available in BITCREXCOIN by granting a higher block reward for zPoS over regular PoS and masternodes. In practice BITCREXCOIN has between 4 to 10 times higher use of it's privacy features in comparison to other coins that combine public and private transactions. This is thanks to innovations like zPoS and integrating the Zerocoin protocol into light/mobile wallets, allowing for a complete and lightweight privacy protocol that can be used on the go. As well as security improvements like deterministic generation of zBIC for easy backups.
The goal of BITCREXCOIN is to achieve a decentralized sustainable crypto currency with near instant full-time private transactions, fair governance and community intelligence.
- Anonymized transactions & consensus using the Zerocoin Protocol and zPoS.
- light/mobile wallet privacy using the Zerocoin Light Node Protocol
- Fast transactions featuring guaranteed zero confirmation transactions, we call it _SwiftX_.
- Decentralized blockchain voting utilizing Masternode technology to form a DAO. The blockchain will distribute monthly treasury funds based on successful proposals submitted by the community and voted on by the DAO.

More information at [bitcrex.xyz](https://www.bitcrex.xyz)

### Coin Specs
<table>
<tr><td>Algo</td><td>Quark</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply (PoW Phase)</td><td>50,059.94 BIC</td></tr>
<tr><td>Max Coin Supply (PoS Phase)</td><td>5,000,000 BIC</td></tr>
<tr><td>Premine</td><td>50,000 BIC</td></tr>
</table>

### Reward Distribution

<table>
<th colspan=4>Genesis Block</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th></tr>
<tr><td>1</td><td>50,000 BIC</td><td>Initial Pre-mine</td></tr>
</table>

### PoW Rewards Breakdown

<table>
<th>Block Height</th><th>Block Reward</th><th>Masternodes</th><th>Miner</th>
<tr><td>2-1000</td><td>0.06 BIC</td><td>0.054 BIC</td><td>0.006 BIC</td></tr>
</table>

### PoS Rewards Breakdown

<table>
<th>Phase</th><th>Block Height</th><th>Block Reward</th><th>Masternodes</th><th>Stakers</th>
<tr><td>Phase 0</td><td>1001-15000</td><td>0.06 BIC</td><td>0.054 BIC</td><td>0.006 BIC</td></tr>
<tr><td>Phase 1</td><td>15001-25000</td><td>0.13 BIC</td><td>0.117 BIC</td><td>0.013 BIC</td></tr>
<tr><td>Phase 2</td><td>25001-35000</td><td>0.2 BIC</td><td>0.18 BIC</td><td>0.02 BIC</td></tr>
<tr><td>Phase 3</td><td>35001-45000</td><td>0.25 BIC</td><td>0.225 BIC</td><td>0.025 BIC</td></tr>
<tr><td>Phase 4</td><td>45001-55000</td><td>0.3 BIC</td><td>0.27 BIC</td><td>0.03 BIC</td></tr>
<tr><td>Phase 5</td><td>55001-65000</td><td>0.4 BIC</td><td>0.36 BIC</td><td>0.04 BIC</td></tr>
<tr><td>Phase 6</td><td>65001-75000</td><td>0.5 BIC</td><td>0.45 BIC</td><td>0.05 BIC</td></tr>
<tr><td>Phase 7</td><td>75001-85000</td><td>0.65 BIC</td><td>0.585 BIC</td><td>0.065 BIC</td></tr>
<tr><td>Phase 8</td><td>85001-95000</td><td>0.85 BIC</td><td>0.765 BIC</td><td>0.085 BIC</td></tr>
<tr><td>Phase 9</td><td>95001-105000</td><td>1 BIC</td><td>0.9 BIC</td><td>0.1 BIC</td></tr>
<tr><td>Phase 10</td><td>105001-115000</td><td>1.2 BIC</td><td>1.08 BIC</td><td>0.12 BIC</td></tr>
<tr><td>Phase 11</td><td>115001-125000</td><td>1.3 BIC</td><td>1.17 BIC</td><td>0.13 BIC</td></tr>
<tr><td>Phase 12</td><td>125001-135000</td><td>1.4 BIC</td><td>1.26 BIC</td><td>0.14 BIC</td></tr>
<tr><td>Phase 13</td><td>135001-145000</td><td>1.5 BIC</td><td>1.35 BIC</td><td>0.15 BIC</td></tr>
<tr><td>Phase 14</td><td>145001-155000</td><td>1.6 BIC</td><td>1.44 BIC</td><td>0.16 BIC</td></tr>
<tr><td>Phase 15</td><td>155001-165000</td><td>1.7 BIC</td><td>1.53 BIC</td><td>0.17 BIC</td></tr>
<tr><td>Phase 16</td><td>165001-175000</td><td>1.8 BIC</td><td>1.62 BIC</td><td>0.18 BIC</td></tr>
<tr><td>Phase 17</td><td>175001-185000</td><td>1.9 BIC</td><td>1.71 BIC</td><td>0.19 BIC</td></tr>
<tr><td>Phase 18</td><td>185001-195000</td><td>2 BIC</td><td>1.8 BIC</td><td>0.2 BIC</td></tr>
<tr><td>Phase 19</td><td>195001-205000</td><td>1.55 BIC</td><td>1.395 BIC</td><td>0.155 BIC</td></tr>
<tr><td>Phase 20</td><td>205001-215000</td><td>1.25 BIC</td><td>1.125 BIC</td><td>0.125 BIC</td></tr>
<tr><td>Phase 21</td><td>215001-235000</td><td>0.95 BIC</td><td>0.855 BIC</td><td>0.095 BIC</td></tr>
<tr><td>Phase 22</td><td>235001-245000</td><td>0.55 BIC</td><td>0.495 BIC</td><td>0.055 BIC</td></tr>
<tr><td>Phase 23</td><td>245001-265000</td><td>0.35 BIC</td><td>0.315 BIC</td><td>0.035 BIC</td></tr>
<tr><td>Phase 24</td><td>265001-500000</td><td>0.22 BIC</td><td>0.198 BIC</td><td>0.022 BIC</td></tr>
<tr><td>Phase 25</td><td>500001-900000</td><td>0.19 BIC</td><td>0.171 BIC</td><td>0.019 BIC</td></tr>
<tr><td>Phase 26</td><td>900001-1500000</td><td>0.17 BIC</td><td>0.153 BIC</td><td>0.017 BIC</td></tr>
<tr><td>Phase 27</td><td>1500001-5000000</td><td>0.08 BIC</td><td>0.072 BIC</td><td>0.008 BIC</td></tr>
<tr><td>Phase 28</td><td>5500001-∞</td><td>0.05 BIC</td><td>0.045 BIC</td><td>0.005 BIC</td></tr>

</table>

