/* Copyright 2017 Paolo Galeone <nessuno@nerdz.eu>. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.*/

#ifndef AT_EXCHANGE_H_
#define AT_EXCHANGE_H_

#include <at/types.hpp>

namespace at {

class Exchange {
public:
    virtual ~Exchange() {}

    // Pure virtual methods

    /* Gets the current rate offered by the exchange for the
     * requested currency pair. This is an estimate because
     * the rate can occasionally change rapidly depending on the markets. The
     * rate is also a 'use-able' rate not a direct market rate. Meaning
     * multiplying your input coin amount times the rate should give you a close
     * approximation of what will be sent out. This rate does not include the
     * transaction (miner) fee taken off every transaction. */
    virtual double rate(currency_pair_t) = 0;
};

}  // end namespace at

#endif  // AT_EXCHANGE_H_