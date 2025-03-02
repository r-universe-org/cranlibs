// Copyright (c) 2005-2024 Jay Berkenbilt
//
// This file is part of qpdf.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied. See the License for the specific language governing permissions and limitations under
// the License.
//
// Versions of qpdf prior to version 7 were released under the terms of version 2.0 of the Artistic
// License. At your option, you may continue to consider qpdf to be licensed under those terms.
// Please see the manual for additional information.

#ifndef QPDFUSAGE_HH
#define QPDFUSAGE_HH

#include <qpdf/DLL.h>

#include <stdexcept>
#include <string>

class QPDF_DLL_CLASS QPDFUsage: public std::runtime_error
{
  public:
    QPDF_DLL
    QPDFUsage(std::string const& msg);
    QPDF_DLL
    ~QPDFUsage() noexcept override = default;
};

#endif // QPDFUSAGE_HH
