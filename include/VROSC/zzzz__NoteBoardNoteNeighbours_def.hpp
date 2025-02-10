#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteNeighbours.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteBoardNoteNeighbours)
namespace VROSC {
class NoteBoardNoteNeighbours_Axis;
}
namespace VROSC {
class NoteBoardNote;
}
// Forward declare root types
namespace VROSC {
class NoteBoardNoteNeighbours;
}
namespace VROSC {
class NoteBoardNoteNeighbours_Axis;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardNoteNeighbours);
MARK_REF_PTR_T(::VROSC::NoteBoardNoteNeighbours_Axis);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteNeighbours/Axis
class CORDL_TYPE NoteBoardNoteNeighbours_Axis : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_InvertedNeighbours, put=set_InvertedNeighbours)) ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  InvertedNeighbours;

 __declspec(property(get=get_Neighbours, put=set_Neighbours)) ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  Neighbours;

/// @brief Field <InvertedNeighbours>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__InvertedNeighbours_k__BackingField, put=__cordl_internal_set__InvertedNeighbours_k__BackingField)) ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  _InvertedNeighbours_k__BackingField;

/// @brief Field <Neighbours>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Neighbours_k__BackingField, put=__cordl_internal_set__Neighbours_k__BackingField)) ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  _Neighbours_k__BackingField;

/// @brief Method AddInvertedNeighBours, addr 0x17b1454, size 0xb8, virtual false, abstract: false, final false
inline void AddInvertedNeighBours(::VROSC::NoteBoardNoteNeighbours_Axis*  firstAxis, ::VROSC::NoteBoardNoteNeighbours_Axis*  secondAxis) ;

static inline ::VROSC::NoteBoardNoteNeighbours_Axis* New_ctor(::VROSC::NoteBoardNote*  up, ::VROSC::NoteBoardNote*  down) ;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*> const& __cordl_internal_get__InvertedNeighbours_k__BackingField() const;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>& __cordl_internal_get__InvertedNeighbours_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*> const& __cordl_internal_get__Neighbours_k__BackingField() const;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>& __cordl_internal_get__Neighbours_k__BackingField() ;

constexpr void __cordl_internal_set__InvertedNeighbours_k__BackingField(::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  value) ;

constexpr void __cordl_internal_set__Neighbours_k__BackingField(::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  value) ;

/// @brief Method .ctor, addr 0x17b1280, size 0x1d4, virtual false, abstract: false, final false
inline void _ctor(::VROSC::NoteBoardNote*  up, ::VROSC::NoteBoardNote*  down) ;

/// @brief Method get_InvertedNeighbours, addr 0x17b15d0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*> get_InvertedNeighbours() ;

/// @brief Method get_Neighbours, addr 0x17b15c0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*> get_Neighbours() ;

/// @brief Method set_InvertedNeighbours, addr 0x17b15c8, size 0x8, virtual false, abstract: false, final false
inline void set_InvertedNeighbours(::ArrayW<::VROSC::NoteBoardNote*,::Array<::VROSC::NoteBoardNote*>*>  value) ;

/// @brief Method set_Neighbours, addr 0x17b15b8, size 0x8, virtual false, abstract: false, final false
inline void set_Neighbours(::ArrayW<::VROSC::NoteBoardNote*,::Array<::VROSC::NoteBoardNote*>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteNeighbours_Axis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteNeighbours_Axis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteNeighbours_Axis(NoteBoardNoteNeighbours_Axis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteNeighbours_Axis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteNeighbours_Axis(NoteBoardNoteNeighbours_Axis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1436};

/// @brief Field <Neighbours>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  ____Neighbours_k__BackingField;

/// @brief Field <InvertedNeighbours>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  ____InvertedNeighbours_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteNeighbours_Axis, ____Neighbours_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteNeighbours_Axis, ____InvertedNeighbours_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteNeighbours_Axis, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteNeighbours
class CORDL_TYPE NoteBoardNoteNeighbours : public ::System::Object {
public:
// Declarations
using Axis = ::VROSC::NoteBoardNoteNeighbours_Axis;

/// @brief Field AllNeighbours, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AllNeighbours, put=__cordl_internal_set_AllNeighbours)) ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  AllNeighbours;

/// @brief Field _x, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__x, put=__cordl_internal_set__x)) ::VROSC::NoteBoardNoteNeighbours_Axis*  _x;

/// @brief Field _y, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__y, put=__cordl_internal_set__y)) ::VROSC::NoteBoardNoteNeighbours_Axis*  _y;

/// @brief Field _z, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__z, put=__cordl_internal_set__z)) ::VROSC::NoteBoardNoteNeighbours_Axis*  _z;

/// @brief Method GetNeighbours, addr 0x17b150c, size 0xac, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*> GetNeighbours(int32_t  axis, bool  inverted) ;

static inline ::VROSC::NoteBoardNoteNeighbours* New_ctor(::VROSC::NoteBoardNote*  xUp, ::VROSC::NoteBoardNote*  xDown, ::VROSC::NoteBoardNote*  yUp, ::VROSC::NoteBoardNote*  yDown, ::VROSC::NoteBoardNote*  zUp, ::VROSC::NoteBoardNote*  zDown) ;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*> const& __cordl_internal_get_AllNeighbours() const;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>& __cordl_internal_get_AllNeighbours() ;

constexpr ::VROSC::NoteBoardNoteNeighbours_Axis* const& __cordl_internal_get__x() const;

constexpr ::VROSC::NoteBoardNoteNeighbours_Axis*& __cordl_internal_get__x() ;

constexpr ::VROSC::NoteBoardNoteNeighbours_Axis* const& __cordl_internal_get__y() const;

constexpr ::VROSC::NoteBoardNoteNeighbours_Axis*& __cordl_internal_get__y() ;

constexpr ::VROSC::NoteBoardNoteNeighbours_Axis* const& __cordl_internal_get__z() const;

constexpr ::VROSC::NoteBoardNoteNeighbours_Axis*& __cordl_internal_get__z() ;

constexpr void __cordl_internal_set_AllNeighbours(::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  value) ;

constexpr void __cordl_internal_set__x(::VROSC::NoteBoardNoteNeighbours_Axis*  value) ;

constexpr void __cordl_internal_set__y(::VROSC::NoteBoardNoteNeighbours_Axis*  value) ;

constexpr void __cordl_internal_set__z(::VROSC::NoteBoardNoteNeighbours_Axis*  value) ;

/// @brief Method .ctor, addr 0x17b1084, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(::VROSC::NoteBoardNote*  xUp, ::VROSC::NoteBoardNote*  xDown, ::VROSC::NoteBoardNote*  yUp, ::VROSC::NoteBoardNote*  yDown, ::VROSC::NoteBoardNote*  zUp, ::VROSC::NoteBoardNote*  zDown) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteNeighbours() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteNeighbours", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteNeighbours(NoteBoardNoteNeighbours && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteNeighbours", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteNeighbours(NoteBoardNoteNeighbours const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1437};

/// @brief Field _x, offset: 0x10, size: 0x8, def value: None
 ::VROSC::NoteBoardNoteNeighbours_Axis*  ____x;

/// @brief Field _y, offset: 0x18, size: 0x8, def value: None
 ::VROSC::NoteBoardNoteNeighbours_Axis*  ____y;

/// @brief Field _z, offset: 0x20, size: 0x8, def value: None
 ::VROSC::NoteBoardNoteNeighbours_Axis*  ____z;

/// @brief Field AllNeighbours, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::NoteBoardNote>,::Array<::UnityW<::VROSC::NoteBoardNote>>*>  ___AllNeighbours;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteNeighbours, ____x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteNeighbours, ____y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteNeighbours, ____z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteNeighbours, ___AllNeighbours) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteNeighbours, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardNoteNeighbours);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteNeighbours*, "VROSC", "NoteBoardNoteNeighbours");
NEED_NO_BOX(::VROSC::NoteBoardNoteNeighbours_Axis);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteNeighbours_Axis*, "VROSC", "NoteBoardNoteNeighbours/Axis");
