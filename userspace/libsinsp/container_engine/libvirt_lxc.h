/*
Copyright (C) 2013-2019 Draios Inc dba Sysdig.

This file is part of sysdig.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*/

#pragma once

class sinsp_container_manager;
class sinsp_container_info;
class sinsp_threadinfo;

#include "container_engine/container_engine.h"

namespace libsinsp {
namespace container_engine {
class libvirt_lxc : public resolver
{
public:
	bool resolve(sinsp_container_manager* manager, sinsp_threadinfo* tinfo, bool query_os_for_missing_info) override;
protected:
	bool match(sinsp_threadinfo* tinfo, sinsp_container_info &container_info);
};
}
}
