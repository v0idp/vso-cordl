#pragma once
// IWYU pragma private; include "RSG/Tuple.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Tuple)
namespace RSG {
template<typename T1,typename T2>
class Tuple_2;
}
namespace RSG {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
namespace RSG {
template<typename T1,typename T2,typename T3,typename T4>
class Tuple_4;
}
// Forward declare root types
namespace RSG {
class Tuple;
}
// Write type traits
MARK_REF_PTR_T(::RSG::Tuple);
// Dependencies System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.Tuple
class CORDL_TYPE Tuple : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::RSG::Tuple_2<T1,T2>* Create(T1  item1, T2  item2) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::RSG::Tuple_3<T1,T2,T3>* Create(T1  item1, T2  item2, T3  item3) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline ::RSG::Tuple_4<T1,T2,T3,T4>* Create(T1  item1, T2  item2, T3  item3, T4  item4) ;

static inline ::RSG::Tuple* New_ctor() ;

/// @brief Method .ctor, addr 0x17f7510, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tuple() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tuple", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple(Tuple && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple(Tuple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1723};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RSG::Tuple, 0x10>, "Size mismatch!");

} // namespace end def RSG
NEED_NO_BOX(::RSG::Tuple);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Tuple*, "RSG", "Tuple");
