// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::Shader>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::Shader, Base<Ubpa::Utopia::Object>>
{
	static constexpr AttrList attrs = {};
	
	static constexpr FieldList fields = {
		Field{"hlslFile", &Ubpa::Utopia::Shader::hlslFile},
		Field{"name", &Ubpa::Utopia::Shader::name},
		Field{"rootParameters", &Ubpa::Utopia::Shader::rootParameters},
		Field{"properties", &Ubpa::Utopia::Shader::properties},
		Field{"passes", &Ubpa::Utopia::Shader::passes},
	};
};

