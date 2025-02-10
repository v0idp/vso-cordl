#pragma once
// IWYU pragma private; include "GlobalNamespace/__f__AnonymousType0_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(__f__AnonymousType0_2)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename Chunk_j__TPar, typename Number_j__TPar>
class __f__AnonymousType0_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__f__AnonymousType0_2);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename Chunk_j__TPar, typename Number_j__TPar>
// Is value type: false
// CS Name: <>f__AnonymousType0`2<Chunk_j__TPar,Number_j__TPar>
class CORDL_TYPE __f__AnonymousType0_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Chunk)) Chunk_j__TPar  Chunk;

 __declspec(property(get=get_Number)) Number_j__TPar  Number;

/// @brief Field <Chunk>i__Field, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Chunk_i__Field, put=__cordl_internal_set__Chunk_i__Field)) Chunk_j__TPar  _Chunk_i__Field;

/// @brief Field <Number>i__Field, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Number_i__Field, put=__cordl_internal_set__Number_i__Field)) Number_j__TPar  _Number_i__Field;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::GlobalNamespace::__f__AnonymousType0_2<Chunk_j__TPar,Number_j__TPar>* New_ctor(Chunk_j__TPar  Chunk, Number_j__TPar  Number) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr Chunk_j__TPar const& __cordl_internal_get__Chunk_i__Field() const;

constexpr Chunk_j__TPar& __cordl_internal_get__Chunk_i__Field() ;

constexpr Number_j__TPar const& __cordl_internal_get__Number_i__Field() const;

constexpr Number_j__TPar& __cordl_internal_get__Number_i__Field() ;

constexpr void __cordl_internal_set__Chunk_i__Field(Chunk_j__TPar  value) ;

constexpr void __cordl_internal_set__Number_i__Field(Number_j__TPar  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(Chunk_j__TPar  Chunk, Number_j__TPar  Number) ;

/// @brief Method get_Chunk, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline Chunk_j__TPar get_Chunk() ;

/// @brief Method get_Number, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline Number_j__TPar get_Number() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __f__AnonymousType0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__f__AnonymousType0_2(__f__AnonymousType0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__f__AnonymousType0_2(__f__AnonymousType0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11601};

/// @brief Field <Chunk>i__Field, offset: 0x10, size: 0x8, def value: None
 Chunk_j__TPar  ____Chunk_i__Field;

/// @brief Field <Number>i__Field, offset: 0x18, size: 0x8, def value: None
 Number_j__TPar  ____Number_i__Field;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__f__AnonymousType0_2, "", "<>f__AnonymousType0`2");
