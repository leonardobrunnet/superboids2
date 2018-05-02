// Copyright (C) 2016-2018 Cássio Kirch.
// License specified in LICENSE file.

#pragma once

#include <vector>
#include "Superboid.hpp"
#include "Box.hpp"

extern bool nextStepOK(std::vector<Box>& boxes, std::vector<Superboid>&, const step_int, const bool shape, const bool gamma, const bool checkVirt, const bool exportVirt);
extern void correctPositionAndRotation(std::vector<Superboid>& superboids);
extern void nextBoxes(std::vector<Box>& boxes, Superboid&);