#pragma once
// IWYU pragma private; include "VROSC/TouchableObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchableObject)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class NoteBoardNote;
}
namespace VROSC {
struct NoteBoard_PlayAxis;
}
namespace VROSC {
class NoteFieldData;
}
namespace VROSC {
class NoteFieldParameters;
}
// Forward declare root types
namespace VROSC {
class TouchableObject;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TouchableObject);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TouchableObject
class CORDL_TYPE TouchableObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Note)) ::UnityW<::VROSC::NoteBoardNote>  Note;

/// @brief Field _3d, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__3d, put=__cordl_internal_set__3d)) int32_t  _3d;

/// @brief Field _height, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Field _note, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__note, put=__cordl_internal_set__note)) ::UnityW<::VROSC::NoteBoardNote>  _note;

/// @brief Field _playing, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__playing, put=__cordl_internal_set__playing)) bool  _playing;

/// @brief Field _playingPower, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get__playingPower, put=__cordl_internal_set__playingPower)) ::UnityEngine::Vector3  _playingPower;

/// @brief Field _x, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__x, put=__cordl_internal_set__x)) int32_t  _x;

/// @brief Field _xDown, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__xDown, put=__cordl_internal_set__xDown)) ::UnityW<::VROSC::NoteBoardNote>  _xDown;

/// @brief Field _xUp, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__xUp, put=__cordl_internal_set__xUp)) ::UnityW<::VROSC::NoteBoardNote>  _xUp;

/// @brief Field _y, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__y, put=__cordl_internal_set__y)) int32_t  _y;

/// @brief Field _yDown, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__yDown, put=__cordl_internal_set__yDown)) ::UnityW<::VROSC::NoteBoardNote>  _yDown;

/// @brief Field _yUp, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__yUp, put=__cordl_internal_set__yUp)) ::UnityW<::VROSC::NoteBoardNote>  _yUp;

/// @brief Field _z, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__z, put=__cordl_internal_set__z)) int32_t  _z;

/// @brief Field _zDown, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__zDown, put=__cordl_internal_set__zDown)) ::UnityW<::VROSC::NoteBoardNote>  _zDown;

/// @brief Field _zUp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__zUp, put=__cordl_internal_set__zUp)) ::UnityW<::VROSC::NoteBoardNote>  _zUp;

/// @brief Method AutoSetup, addr 0x176d8f0, size 0x50, virtual false, abstract: false, final false
inline void AutoSetup() ;

/// @brief Method AutoSetupNeighbours, addr 0x176d940, size 0x294, virtual false, abstract: false, final false
inline void AutoSetupNeighbours() ;

static inline ::VROSC::TouchableObject* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x176dbd4, size 0x3c4, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method SetHeight, addr 0x176d7d8, size 0x8, virtual false, abstract: false, final false
inline void SetHeight(float_t  height) ;

/// @brief Method Setup, addr 0x176d128, size 0x624, virtual false, abstract: false, final false
inline void Setup(::VROSC::NoteFieldParameters*  parameters, ::VROSC::NoteFieldData*  noteFieldData, ::UnityEngine::Vector3  fieldSize) ;

/// @brief Method UpdateHovering, addr 0x176d74c, size 0x28, virtual false, abstract: false, final false
inline void UpdateHovering(bool  isInside) ;

/// @brief Method UpdatePlaying, addr 0x176d774, size 0x64, virtual false, abstract: false, final false
inline void UpdatePlaying(bool  isInside, bool  playing, ::VROSC::NoteBoard_PlayAxis  playAxis) ;

/// @brief Method UpdateVisuals, addr 0x176d7e0, size 0x110, virtual false, abstract: false, final false
inline void UpdateVisuals() ;

constexpr int32_t const& __cordl_internal_get__3d() const;

constexpr int32_t& __cordl_internal_get__3d() ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__note() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__note() ;

constexpr bool const& __cordl_internal_get__playing() const;

constexpr bool& __cordl_internal_get__playing() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__playingPower() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__playingPower() ;

constexpr int32_t const& __cordl_internal_get__x() const;

constexpr int32_t& __cordl_internal_get__x() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__xDown() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__xDown() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__xUp() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__xUp() ;

constexpr int32_t const& __cordl_internal_get__y() const;

constexpr int32_t& __cordl_internal_get__y() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__yDown() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__yDown() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__yUp() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__yUp() ;

constexpr int32_t const& __cordl_internal_get__z() const;

constexpr int32_t& __cordl_internal_get__z() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__zDown() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__zDown() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__zUp() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__zUp() ;

constexpr void __cordl_internal_set__3d(int32_t  value) ;

constexpr void __cordl_internal_set__height(float_t  value) ;

constexpr void __cordl_internal_set__note(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__playing(bool  value) ;

constexpr void __cordl_internal_set__playingPower(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__x(int32_t  value) ;

constexpr void __cordl_internal_set__xDown(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__xUp(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__y(int32_t  value) ;

constexpr void __cordl_internal_set__yDown(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__yUp(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__z(int32_t  value) ;

constexpr void __cordl_internal_set__zDown(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__zUp(::UnityW<::VROSC::NoteBoardNote>  value) ;

/// @brief Method .ctor, addr 0x176df98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Note, addr 0x176d120, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNote> get_Note() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchableObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchableObject(TouchableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchableObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchableObject(TouchableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1223};

/// @brief Field _note, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____note;

/// @brief Field _xUp, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____xUp;

/// @brief Field _xDown, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____xDown;

/// @brief Field _yUp, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____yUp;

/// @brief Field _yDown, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____yDown;

/// @brief Field _zUp, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____zUp;

/// @brief Field _zDown, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____zDown;

/// @brief Field _x, offset: 0x58, size: 0x4, def value: None
 int32_t  ____x;

/// @brief Field _y, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____y;

/// @brief Field _z, offset: 0x60, size: 0x4, def value: None
 int32_t  ____z;

/// @brief Field _3d, offset: 0x64, size: 0x4, def value: None
 int32_t  ____3d;

/// @brief Field _playingPower, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____playingPower;

/// @brief Field _playing, offset: 0x74, size: 0x1, def value: None
 bool  ____playing;

/// @brief Field _height, offset: 0x78, size: 0x4, def value: None
 float_t  ____height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TouchableObject, ____note) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____xUp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____xDown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____yUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____yDown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____zUp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____zDown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____x) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____y) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____z) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____3d) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____playingPower) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____playing) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::TouchableObject, ____height) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TouchableObject, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TouchableObject);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TouchableObject*, "VROSC", "TouchableObject");
