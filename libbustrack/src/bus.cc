/* ========================================================================= 
 * BusTrack Bus Tracking System
 * CS3249 User Interface Development
 * =========================================================================
 * Copyright 2014 Ko Wan Ling, Terence Then, Kek Yan Rong and Wong Yong Jie
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ========================================================================= */

#include "bustrack/bus.h"

namespace bustrack {

  std::string Bus::getPlateNumber() {
    return plate_number_;
  }

  void Bus::setPlateNumber(const std::string& plate_number) {
    plate_number_ = plate_number;
  }

  BusService Bus::getService() {
    return service_;
  }

  void Bus::setService(BusService service) {
    service_ = service;
  }

}

/* vim: set ts=2 sw=2 et: */
