#pragma once
// IWYU pragma private; include "VROSC/LocationBasedNoteFieldVisualSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__NoteFieldVisualSpawner_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocationBasedNoteFieldVisualSpawner)
namespace VROSC {
struct LocationBasedNoteFieldVisualSpawner_Location;
}
namespace VROSC {
class NoteFieldNoteData;
}
namespace VROSC {
class NoteFieldVisual;
}
// Forward declare root types
namespace VROSC {
struct LocationBasedNoteFieldVisualSpawner_Location;
}
namespace VROSC {
class LocationBasedNoteFieldVisualSpawner;
}
// Write type traits
MARK_VAL_T(::VROSC::LocationBasedNoteFieldVisualSpawner_Location);
MARK_REF_PTR_T(::VROSC::LocationBasedNoteFieldVisualSpawner);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LocationBasedNoteFieldVisualSpawner/Location
struct CORDL_TYPE LocationBasedNoteFieldVisualSpawner_Location {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocationBasedNoteFieldVisualSpawner_Location_Unwrapped
enum struct __LocationBasedNoteFieldVisualSpawner_Location_Unwrapped : int32_t {
__E_Corner = static_cast<int32_t>(0x0),
__E_Side = static_cast<int32_t>(0x1),
__E_Center = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocationBasedNoteFieldVisualSpawner_Location_Unwrapped () const noexcept {
return static_cast<__LocationBasedNoteFieldVisualSpawner_Location_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocationBasedNoteFieldVisualSpawner_Location() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LocationBasedNoteFieldVisualSpawner_Location(int32_t  value__) noexcept;

/// @brief Field Center value: I32(2)
static ::VROSC::LocationBasedNoteFieldVisualSpawner_Location const Center;

/// @brief Field Corner value: I32(0)
static ::VROSC::LocationBasedNoteFieldVisualSpawner_Location const Corner;

/// @brief Field Side value: I32(1)
static ::VROSC::LocationBasedNoteFieldVisualSpawner_Location const Side;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1457};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LocationBasedNoteFieldVisualSpawner_Location, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LocationBasedNoteFieldVisualSpawner_Location, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.NoteFieldVisualSpawner
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LocationBasedNoteFieldVisualSpawner
class CORDL_TYPE LocationBasedNoteFieldVisualSpawner : public ::VROSC::NoteFieldVisualSpawner {
public:
// Declarations
using Location = ::VROSC::LocationBasedNoteFieldVisualSpawner_Location;

/// @brief Field _corner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__corner, put=__cordl_internal_set__corner)) ::UnityW<::VROSC::NoteFieldVisual>  _corner;

/// @brief Field _side, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__side, put=__cordl_internal_set__side)) ::UnityW<::VROSC::NoteFieldVisual>  _side;

/// @brief Field _skipX, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__skipX, put=__cordl_internal_set__skipX)) bool  _skipX;

/// @brief Field _skipY, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__skipY, put=__cordl_internal_set__skipY)) bool  _skipY;

/// @brief Field _skipZ, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get__skipZ, put=__cordl_internal_set__skipZ)) bool  _skipZ;

/// @brief Method GetLocation, addr 0x17b75cc, size 0xe8, virtual false, abstract: false, final false
inline ::VROSC::LocationBasedNoteFieldVisualSpawner_Location GetLocation(::VROSC::NoteFieldNoteData*  data, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields) ;

/// @brief Method GetVisual, addr 0x17b76b4, size 0x38, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteFieldVisual> GetVisual(::VROSC::NoteFieldNoteData*  data, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields) ;

/// @brief Method IsSideNote, addr 0x17b75a4, size 0x28, virtual false, abstract: false, final false
inline int32_t IsSideNote(int32_t  noteNumber, int32_t  numberOfFields, bool  skip) ;

static inline ::VROSC::LocationBasedNoteFieldVisualSpawner* New_ctor() ;

constexpr ::UnityW<::VROSC::NoteFieldVisual> const& __cordl_internal_get__corner() const;

constexpr ::UnityW<::VROSC::NoteFieldVisual>& __cordl_internal_get__corner() ;

constexpr ::UnityW<::VROSC::NoteFieldVisual> const& __cordl_internal_get__side() const;

constexpr ::UnityW<::VROSC::NoteFieldVisual>& __cordl_internal_get__side() ;

constexpr bool const& __cordl_internal_get__skipX() const;

constexpr bool& __cordl_internal_get__skipX() ;

constexpr bool const& __cordl_internal_get__skipY() const;

constexpr bool& __cordl_internal_get__skipY() ;

constexpr bool const& __cordl_internal_get__skipZ() const;

constexpr bool& __cordl_internal_get__skipZ() ;

constexpr void __cordl_internal_set__corner(::UnityW<::VROSC::NoteFieldVisual>  value) ;

constexpr void __cordl_internal_set__side(::UnityW<::VROSC::NoteFieldVisual>  value) ;

constexpr void __cordl_internal_set__skipX(bool  value) ;

constexpr void __cordl_internal_set__skipY(bool  value) ;

constexpr void __cordl_internal_set__skipZ(bool  value) ;

/// @brief Method .ctor, addr 0x17b76ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocationBasedNoteFieldVisualSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocationBasedNoteFieldVisualSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocationBasedNoteFieldVisualSpawner(LocationBasedNoteFieldVisualSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocationBasedNoteFieldVisualSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocationBasedNoteFieldVisualSpawner(LocationBasedNoteFieldVisualSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1458};

/// @brief Field _corner, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteFieldVisual>  ____corner;

/// @brief Field _side, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteFieldVisual>  ____side;

/// @brief Field _skipX, offset: 0x40, size: 0x1, def value: None
 bool  ____skipX;

/// @brief Field _skipY, offset: 0x41, size: 0x1, def value: None
 bool  ____skipY;

/// @brief Field _skipZ, offset: 0x42, size: 0x1, def value: None
 bool  ____skipZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LocationBasedNoteFieldVisualSpawner, ____corner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocationBasedNoteFieldVisualSpawner, ____side) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocationBasedNoteFieldVisualSpawner, ____skipX) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocationBasedNoteFieldVisualSpawner, ____skipY) == 0x41, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocationBasedNoteFieldVisualSpawner, ____skipZ) == 0x42, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LocationBasedNoteFieldVisualSpawner, 0x48>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LocationBasedNoteFieldVisualSpawner_Location, "VROSC", "LocationBasedNoteFieldVisualSpawner/Location");
NEED_NO_BOX(::VROSC::LocationBasedNoteFieldVisualSpawner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LocationBasedNoteFieldVisualSpawner*, "VROSC", "LocationBasedNoteFieldVisualSpawner");
