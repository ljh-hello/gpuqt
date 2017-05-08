/*
    Copyright 2017 Zheyong Fan, Ville Vierimaa, and Ari Harju

    This file is part of GPUQT.

    GPUQT is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    GPUQT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with GPUQT.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once

#include "common.h"
#include "vector.h"
#include "hamiltonian.h"

class Model;

void find_dos(Model &para, Hamiltonian& H, Vector& random_state);
void find_vac(Model &para, Hamiltonian& H, Vector& random_state);
void find_msd(Model &para, Hamiltonian& H, Vector& random_state);


