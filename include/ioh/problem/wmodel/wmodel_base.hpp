#pragma once
#include "ioh/problem/base.hpp"
#include "ioh/problem/utils.hpp"

namespace ioh
{
	namespace problem
	{
		namespace wmodel
		{
			class wmodel_base : public base<int>
			{
			public:
				wmodel_base(std::string problem_name, int instance_id = DEFAULT_INSTANCE, int dimension = DEFAULT_DIMENSION) {
					set_instance_id(instance_id);
					set_problem_name(problem_name);
					set_problem_type("pseudo_Boolean_problem");
					set_number_of_objectives(1);
					set_lowerbound(0);
					set_upperbound(1);
					set_best_variables(1);
				}
			};
		}
	}
}