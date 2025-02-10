#pragma once
// IWYU pragma private; include "RSG/Tuple_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Tuple_2)
// Forward declare root types
namespace RSG {
template<typename T1,typename T2>
class Tuple_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::RSG::Tuple_2);
// Dependencies System.Object
namespace RSG {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: RSG.Tuple`2<T1,T2>
class CORDL_TYPE Tuple_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item1, put=set_Item1)) T1  Item1;

 __declspec(property(get=get_Item2, put=set_Item2)) T2  Item2;

/// @brief Field <Item1>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Item1_k__BackingField, put=__cordl_internal_set__Item1_k__BackingField)) T1  _Item1_k__BackingField;

/// @brief Field <Item2>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Item2_k__BackingField, put=__cordl_internal_set__Item2_k__BackingField)) T2  _Item2_k__BackingField;

static inline ::RSG::Tuple_2<T1,T2>* New_ctor(T1  item1, T2  item2) ;

constexpr T1 const& __cordl_internal_get__Item1_k__BackingField() const;

constexpr T1& __cordl_internal_get__Item1_k__BackingField() ;

constexpr T2 const& __cordl_internal_get__Item2_k__BackingField() const;

constexpr T2& __cordl_internal_get__Item2_k__BackingField() ;

constexpr void __cordl_internal_set__Item1_k__BackingField(T1  value) ;

constexpr void __cordl_internal_set__Item2_k__BackingField(T2  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T1  item1, T2  item2) ;

/// @brief Method get_Item1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T1 get_Item1() ;

/// @brief Method get_Item2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T2 get_Item2() ;

/// @brief Method set_Item1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item1(T1  value) ;

/// @brief Method set_Item2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item2(T2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tuple_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tuple_2(Tuple_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tuple_2(Tuple_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1724};

/// @brief Field <Item1>k__BackingField, offset: 0x10, size: 0x8, def value: None
 T1  ____Item1_k__BackingField;

/// @brief Field <Item2>k__BackingField, offset: 0x18, size: 0x8, def value: None
 T2  ____Item2_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Tuple_2, "RSG", "Tuple`2");
