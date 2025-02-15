/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2020 Metrological
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
 */

#pragma once

#ifndef MODULE_NAME
#error "Please define a MODULE_NAME that describes the binary/library you are building."
#endif

#include "IDriver.h"
#include "HCISocket.h"
#include "GATTSocket.h"
#include "GATTProfile.h"
#include "SDPSocket.h"
#include "SDPProfile.h"
#include "AVDTPSocket.h"
#include "AVDTPProfile.h"
#include "RTPSocket.h"
#include "GATTProfile.h"
#ifdef __WINDOWS__
#pragma comment(lib, "bluetooth.lib")
#endif
