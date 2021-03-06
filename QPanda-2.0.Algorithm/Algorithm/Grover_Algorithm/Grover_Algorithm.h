/*
Copyright (c) 2017-2018 Origin Quantum Computing. All Right Reserved.

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

#ifndef GROVER_ALGORITHM_H
#define GROVER_ALGORITHM_H

#include "QPanda.h"
#include "../Utilities/Utilities.h"

void Grover_Algorithm();

QProg Two_Qubit_DJ_Algorithm_Circuit(
	Qubit* qubit1,
	Qubit* qubit2,
	CBit* cbit,
	vector<bool> oracle_function);

#endif