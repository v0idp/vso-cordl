#pragma once
// IWYU pragma private; include "VROSC/NoteBoard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Node_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteBoard)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ControllerInputNode;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class IntField;
}
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
struct NoteBoardNote_Coloring;
}
namespace VROSC {
struct NoteBoard_Axis;
}
namespace VROSC {
class NoteBoard_NoteAxis;
}
namespace VROSC {
struct NoteBoard_PlayAxis;
}
namespace VROSC {
class NoteFieldNoteData;
}
namespace VROSC {
class NoteFieldParameters;
}
namespace VROSC {
class NoteField;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ScaleNode;
}
namespace VROSC {
struct Scale;
}
// Forward declare root types
namespace VROSC {
struct NoteBoard_Axis;
}
namespace VROSC {
struct NoteBoard_PlayAxis;
}
namespace VROSC {
class NoteBoard;
}
namespace VROSC {
class NoteBoard_NoteAxis;
}
// Write type traits
MARK_VAL_T(::VROSC::NoteBoard_Axis);
MARK_VAL_T(::VROSC::NoteBoard_PlayAxis);
MARK_REF_PTR_T(::VROSC::NoteBoard);
MARK_REF_PTR_T(::VROSC::NoteBoard_NoteAxis);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NoteBoard/Axis
struct CORDL_TYPE NoteBoard_Axis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NoteBoard_Axis_Unwrapped
enum struct __NoteBoard_Axis_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NoteBoard_Axis_Unwrapped () const noexcept {
return static_cast<__NoteBoard_Axis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NoteBoard_Axis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NoteBoard_Axis(int32_t  value__) noexcept;

/// @brief Field X value: I32(0)
static ::VROSC::NoteBoard_Axis const X;

/// @brief Field Y value: I32(1)
static ::VROSC::NoteBoard_Axis const Y;

/// @brief Field Z value: I32(2)
static ::VROSC::NoteBoard_Axis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1003};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoard_Axis, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoard_Axis, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NoteBoard/PlayAxis
struct CORDL_TYPE NoteBoard_PlayAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NoteBoard_PlayAxis_Unwrapped
enum struct __NoteBoard_PlayAxis_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_X = static_cast<int32_t>(0x1),
__E_Y = static_cast<int32_t>(0x2),
__E_Z = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NoteBoard_PlayAxis_Unwrapped () const noexcept {
return static_cast<__NoteBoard_PlayAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NoteBoard_PlayAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NoteBoard_PlayAxis(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::VROSC::NoteBoard_PlayAxis const All;

/// @brief Field X value: I32(1)
static ::VROSC::NoteBoard_PlayAxis const X;

/// @brief Field Y value: I32(2)
static ::VROSC::NoteBoard_PlayAxis const Y;

/// @brief Field Z value: I32(3)
static ::VROSC::NoteBoard_PlayAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoard_PlayAxis, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoard_PlayAxis, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.Note, VROSC.NoteBoard::Axis, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoard/NoteAxis
class CORDL_TYPE NoteBoard_NoteAxis : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Axis, put=set_Axis)) ::VROSC::NoteBoard_Axis  Axis;

/// @brief Field IntervalBetweenNotes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_IntervalBetweenNotes, put=__cordl_internal_set_IntervalBetweenNotes)) ::VROSC::IntField*  IntervalBetweenNotes;

/// @brief Field NumberOfNotes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_NumberOfNotes, put=__cordl_internal_set_NumberOfNotes)) ::VROSC::IntField*  NumberOfNotes;

/// @brief Field OverrideBoard, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideBoard, put=__cordl_internal_set_OverrideBoard)) bool  OverrideBoard;

/// @brief Field OverrideScale, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OverrideScale, put=__cordl_internal_set_OverrideScale)) ::UnityW<::VROSC::ScaleNode>  OverrideScale;

/// @brief Field OverrideStartNote, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OverrideStartNote, put=__cordl_internal_set_OverrideStartNote)) ::VROSC::NoteField*  OverrideStartNote;

 __declspec(property(get=get_Scale, put=set_Scale)) ::VROSC::Scale  Scale;

 __declspec(property(get=get_StartNote, put=set_StartNote)) ::VROSC::Note  StartNote;

/// @brief Field StartOctave, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartOctave, put=__cordl_internal_set_StartOctave)) ::VROSC::IntField*  StartOctave;

/// @brief Field <Axis>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Axis_k__BackingField, put=__cordl_internal_set__Axis_k__BackingField)) ::VROSC::NoteBoard_Axis  _Axis_k__BackingField;

/// @brief Field <Scale>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Scale_k__BackingField, put=__cordl_internal_set__Scale_k__BackingField)) ::VROSC::Scale  _Scale_k__BackingField;

/// @brief Field <StartNote>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__StartNote_k__BackingField, put=__cordl_internal_set__StartNote_k__BackingField)) ::VROSC::Note  _StartNote_k__BackingField;

/// @brief Field _lastIntervalBetweenNotes, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastIntervalBetweenNotes, put=__cordl_internal_set__lastIntervalBetweenNotes)) int32_t  _lastIntervalBetweenNotes;

/// @brief Field _lastNumberOfNotes, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastNumberOfNotes, put=__cordl_internal_set__lastNumberOfNotes)) int32_t  _lastNumberOfNotes;

/// @brief Field _lastScale, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastScale, put=__cordl_internal_set__lastScale)) ::VROSC::Scale  _lastScale;

/// @brief Field _lastStartNote, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStartNote, put=__cordl_internal_set__lastStartNote)) ::VROSC::Note  _lastStartNote;

/// @brief Field _lastStartOctave, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStartOctave, put=__cordl_internal_set__lastStartOctave)) int32_t  _lastStartOctave;

/// @brief Method Init, addr 0x1724628, size 0x8, virtual false, abstract: false, final false
inline void Init(::VROSC::NoteBoard_Axis  axis) ;

static inline ::VROSC::NoteBoard_NoteAxis* New_ctor() ;

/// @brief Method UpdateAndReturnIsDirty, addr 0x17247ec, size 0x174, virtual false, abstract: false, final false
inline bool UpdateAndReturnIsDirty(::VROSC::Scale  noteBoardScale, ::VROSC::Note  noteBoardStartNote) ;

constexpr ::VROSC::IntField* const& __cordl_internal_get_IntervalBetweenNotes() const;

constexpr ::VROSC::IntField*& __cordl_internal_get_IntervalBetweenNotes() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get_NumberOfNotes() const;

constexpr ::VROSC::IntField*& __cordl_internal_get_NumberOfNotes() ;

constexpr bool const& __cordl_internal_get_OverrideBoard() const;

constexpr bool& __cordl_internal_get_OverrideBoard() ;

constexpr ::UnityW<::VROSC::ScaleNode> const& __cordl_internal_get_OverrideScale() const;

constexpr ::UnityW<::VROSC::ScaleNode>& __cordl_internal_get_OverrideScale() ;

constexpr ::VROSC::NoteField* const& __cordl_internal_get_OverrideStartNote() const;

constexpr ::VROSC::NoteField*& __cordl_internal_get_OverrideStartNote() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get_StartOctave() const;

constexpr ::VROSC::IntField*& __cordl_internal_get_StartOctave() ;

constexpr ::VROSC::NoteBoard_Axis const& __cordl_internal_get__Axis_k__BackingField() const;

constexpr ::VROSC::NoteBoard_Axis& __cordl_internal_get__Axis_k__BackingField() ;

constexpr ::VROSC::Scale const& __cordl_internal_get__Scale_k__BackingField() const;

constexpr ::VROSC::Scale& __cordl_internal_get__Scale_k__BackingField() ;

constexpr ::VROSC::Note const& __cordl_internal_get__StartNote_k__BackingField() const;

constexpr ::VROSC::Note& __cordl_internal_get__StartNote_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__lastIntervalBetweenNotes() const;

constexpr int32_t& __cordl_internal_get__lastIntervalBetweenNotes() ;

constexpr int32_t const& __cordl_internal_get__lastNumberOfNotes() const;

constexpr int32_t& __cordl_internal_get__lastNumberOfNotes() ;

constexpr ::VROSC::Scale const& __cordl_internal_get__lastScale() const;

constexpr ::VROSC::Scale& __cordl_internal_get__lastScale() ;

constexpr ::VROSC::Note const& __cordl_internal_get__lastStartNote() const;

constexpr ::VROSC::Note& __cordl_internal_get__lastStartNote() ;

constexpr int32_t const& __cordl_internal_get__lastStartOctave() const;

constexpr int32_t& __cordl_internal_get__lastStartOctave() ;

constexpr void __cordl_internal_set_IntervalBetweenNotes(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set_NumberOfNotes(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set_OverrideBoard(bool  value) ;

constexpr void __cordl_internal_set_OverrideScale(::UnityW<::VROSC::ScaleNode>  value) ;

constexpr void __cordl_internal_set_OverrideStartNote(::VROSC::NoteField*  value) ;

constexpr void __cordl_internal_set_StartOctave(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set__Axis_k__BackingField(::VROSC::NoteBoard_Axis  value) ;

constexpr void __cordl_internal_set__Scale_k__BackingField(::VROSC::Scale  value) ;

constexpr void __cordl_internal_set__StartNote_k__BackingField(::VROSC::Note  value) ;

constexpr void __cordl_internal_set__lastIntervalBetweenNotes(int32_t  value) ;

constexpr void __cordl_internal_set__lastNumberOfNotes(int32_t  value) ;

constexpr void __cordl_internal_set__lastScale(::VROSC::Scale  value) ;

constexpr void __cordl_internal_set__lastStartNote(::VROSC::Note  value) ;

constexpr void __cordl_internal_set__lastStartOctave(int32_t  value) ;

/// @brief Method .ctor, addr 0x1724c58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Axis, addr 0x1724c48, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteBoard_Axis get_Axis() ;

/// @brief Method get_Scale, addr 0x1724c28, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::Scale get_Scale() ;

/// @brief Method get_StartNote, addr 0x1724c38, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::Note get_StartNote() ;

/// @brief Method set_Axis, addr 0x1724c50, size 0x8, virtual false, abstract: false, final false
inline void set_Axis(::VROSC::NoteBoard_Axis  value) ;

/// @brief Method set_Scale, addr 0x1724c30, size 0x8, virtual false, abstract: false, final false
inline void set_Scale(::VROSC::Scale  value) ;

/// @brief Method set_StartNote, addr 0x1724c40, size 0x8, virtual false, abstract: false, final false
inline void set_StartNote(::VROSC::Note  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoard_NoteAxis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoard_NoteAxis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoard_NoteAxis(NoteBoard_NoteAxis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoard_NoteAxis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoard_NoteAxis(NoteBoard_NoteAxis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1005};

/// @brief Field <Scale>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::VROSC::Scale  ____Scale_k__BackingField;

/// @brief Field <StartNote>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::VROSC::Note  ____StartNote_k__BackingField;

/// @brief Field <Axis>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::VROSC::NoteBoard_Axis  ____Axis_k__BackingField;

/// @brief Field OverrideBoard, offset: 0x1c, size: 0x1, def value: None
 bool  ___OverrideBoard;

/// @brief Field OverrideScale, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ScaleNode>  ___OverrideScale;

/// @brief Field OverrideStartNote, offset: 0x28, size: 0x8, def value: None
 ::VROSC::NoteField*  ___OverrideStartNote;

/// @brief Field StartOctave, offset: 0x30, size: 0x8, def value: None
 ::VROSC::IntField*  ___StartOctave;

/// @brief Field NumberOfNotes, offset: 0x38, size: 0x8, def value: None
 ::VROSC::IntField*  ___NumberOfNotes;

/// @brief Field IntervalBetweenNotes, offset: 0x40, size: 0x8, def value: None
 ::VROSC::IntField*  ___IntervalBetweenNotes;

/// @brief Field _lastScale, offset: 0x48, size: 0x4, def value: None
 ::VROSC::Scale  ____lastScale;

/// @brief Field _lastStartNote, offset: 0x4c, size: 0x4, def value: None
 ::VROSC::Note  ____lastStartNote;

/// @brief Field _lastStartOctave, offset: 0x50, size: 0x4, def value: None
 int32_t  ____lastStartOctave;

/// @brief Field _lastNumberOfNotes, offset: 0x54, size: 0x4, def value: None
 int32_t  ____lastNumberOfNotes;

/// @brief Field _lastIntervalBetweenNotes, offset: 0x58, size: 0x4, def value: None
 int32_t  ____lastIntervalBetweenNotes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ____Scale_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ____StartNote_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ____Axis_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ___OverrideBoard) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ___OverrideScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ___OverrideStartNote) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ___StartOctave) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ___NumberOfNotes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ___IntervalBetweenNotes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ____lastScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ____lastStartNote) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ____lastStartOctave) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ____lastNumberOfNotes) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard_NoteAxis, ____lastIntervalBetweenNotes) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoard_NoteAxis, 0x60>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.Node, VROSC.NoteBoard::Axis
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoard
class CORDL_TYPE NoteBoard : public ::VROSC::Node {
public:
// Declarations
using Axis = ::VROSC::NoteBoard_Axis;

using NoteAxis = ::VROSC::NoteBoard_NoteAxis;

using PlayAxis = ::VROSC::NoteBoard_PlayAxis;

/// @brief Field _controllerInputNode, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerInputNode, put=__cordl_internal_set__controllerInputNode)) ::UnityW<::VROSC::ControllerInputNode>  _controllerInputNode;

/// @brief Field _noteAxes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteAxes, put=__cordl_internal_set__noteAxes)) ::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>  _noteAxes;

/// @brief Field _noteAxisX, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteAxisX, put=__cordl_internal_set__noteAxisX)) ::VROSC::NoteBoard_NoteAxis*  _noteAxisX;

/// @brief Field _noteAxisY, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteAxisY, put=__cordl_internal_set__noteAxisY)) ::VROSC::NoteBoard_NoteAxis*  _noteAxisY;

/// @brief Field _noteAxisZ, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteAxisZ, put=__cordl_internal_set__noteAxisZ)) ::VROSC::NoteBoard_NoteAxis*  _noteAxisZ;

/// @brief Field _notefieldController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__notefieldController, put=__cordl_internal_set__notefieldController)) ::UnityW<::VROSC::NoteBoardNoteController>  _notefieldController;

/// @brief Field _primaryAxis, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__primaryAxis, put=__cordl_internal_set__primaryAxis)) ::VROSC::NoteBoard_Axis  _primaryAxis;

/// @brief Field _scale, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) ::UnityW<::VROSC::ScaleNode>  _scale;

/// @brief Field _startNote, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__startNote, put=__cordl_internal_set__startNote)) ::VROSC::NoteField*  _startNote;

/// @brief Method Awake, addr 0x17242ac, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckScaleAndBase, addr 0x1724604, size 0x24, virtual false, abstract: false, final false
inline void CheckScaleAndBase() ;

/// @brief Method CreateNoteFieldParameters, addr 0x1724760, size 0x8c, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldParameters* CreateNoteFieldParameters() ;

/// @brief Method GetNormalizedPoint, addr 0x171b8b8, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNormalizedPoint(::UnityEngine::Vector3  position) ;

/// @brief Method GetNote, addr 0x171ea54, size 0x70, virtual false, abstract: false, final false
inline int32_t GetNote(::UnityEngine::Vector3  position, ::VROSC::NoteBoard_PlayAxis  playMode) ;

/// @brief Method GetNoteField, addr 0x171be1c, size 0x24, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldNoteData* GetNoteField(::UnityEngine::Vector3  position) ;

/// @brief Method GetScale, addr 0x171bbb8, size 0xa8, virtual false, abstract: false, final false
inline ::VROSC::Scale GetScale(::VROSC::NoteBoard_PlayAxis  playAxis) ;

/// @brief Method Hover, addr 0x17249d4, size 0x54, virtual false, abstract: false, final false
inline void Hover(::VROSC::InputDevice*  device) ;

/// @brief Method HoverBegin, addr 0x1724960, size 0x74, virtual false, abstract: false, final false
inline void HoverBegin(::VROSC::InputDevice*  device) ;

/// @brief Method HoverEnd, addr 0x1724a28, size 0x7c, virtual false, abstract: false, final false
inline void HoverEnd(::VROSC::InputDevice*  device) ;

/// @brief Method LateUpdate, addr 0x17245e0, size 0x24, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::NoteBoard* New_ctor() ;

/// @brief Method NoteAxisToVector, addr 0x1724aa4, size 0x12c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 NoteAxisToVector(::VROSC::NoteBoard_PlayAxis  playAxis) ;

/// @brief Method NoteAxisToVector, addr 0x171e238, size 0xdc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 NoteAxisToVector(::VROSC::NoteBoard_PlayAxis  playAxis, ::VROSC::NoteBoardNote_Coloring  coloring) ;

/// @brief Method Setup, addr 0x17242b0, size 0x330, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateAxisesAndReturnIfDirty, addr 0x1724660, size 0x100, virtual false, abstract: false, final false
inline bool UpdateAxisesAndReturnIfDirty() ;

/// @brief Method UpdateScaleAndBase, addr 0x1724630, size 0x30, virtual false, abstract: false, final false
inline void UpdateScaleAndBase() ;

constexpr ::UnityW<::VROSC::ControllerInputNode> const& __cordl_internal_get__controllerInputNode() const;

constexpr ::UnityW<::VROSC::ControllerInputNode>& __cordl_internal_get__controllerInputNode() ;

constexpr ::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*> const& __cordl_internal_get__noteAxes() const;

constexpr ::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>& __cordl_internal_get__noteAxes() ;

constexpr ::VROSC::NoteBoard_NoteAxis* const& __cordl_internal_get__noteAxisX() const;

constexpr ::VROSC::NoteBoard_NoteAxis*& __cordl_internal_get__noteAxisX() ;

constexpr ::VROSC::NoteBoard_NoteAxis* const& __cordl_internal_get__noteAxisY() const;

constexpr ::VROSC::NoteBoard_NoteAxis*& __cordl_internal_get__noteAxisY() ;

constexpr ::VROSC::NoteBoard_NoteAxis* const& __cordl_internal_get__noteAxisZ() const;

constexpr ::VROSC::NoteBoard_NoteAxis*& __cordl_internal_get__noteAxisZ() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get__notefieldController() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get__notefieldController() ;

constexpr ::VROSC::NoteBoard_Axis const& __cordl_internal_get__primaryAxis() const;

constexpr ::VROSC::NoteBoard_Axis& __cordl_internal_get__primaryAxis() ;

constexpr ::UnityW<::VROSC::ScaleNode> const& __cordl_internal_get__scale() const;

constexpr ::UnityW<::VROSC::ScaleNode>& __cordl_internal_get__scale() ;

constexpr ::VROSC::NoteField* const& __cordl_internal_get__startNote() const;

constexpr ::VROSC::NoteField*& __cordl_internal_get__startNote() ;

constexpr void __cordl_internal_set__controllerInputNode(::UnityW<::VROSC::ControllerInputNode>  value) ;

constexpr void __cordl_internal_set__noteAxes(::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>  value) ;

constexpr void __cordl_internal_set__noteAxisX(::VROSC::NoteBoard_NoteAxis*  value) ;

constexpr void __cordl_internal_set__noteAxisY(::VROSC::NoteBoard_NoteAxis*  value) ;

constexpr void __cordl_internal_set__noteAxisZ(::VROSC::NoteBoard_NoteAxis*  value) ;

constexpr void __cordl_internal_set__notefieldController(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

constexpr void __cordl_internal_set__primaryAxis(::VROSC::NoteBoard_Axis  value) ;

constexpr void __cordl_internal_set__scale(::UnityW<::VROSC::ScaleNode>  value) ;

constexpr void __cordl_internal_set__startNote(::VROSC::NoteField*  value) ;

/// @brief Method .ctor, addr 0x1724bd0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoard(NoteBoard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoard(NoteBoard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1006};

/// @brief Field _scale, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ScaleNode>  ____scale;

/// @brief Field _startNote, offset: 0x28, size: 0x8, def value: None
 ::VROSC::NoteField*  ____startNote;

/// @brief Field _noteAxisX, offset: 0x30, size: 0x8, def value: None
 ::VROSC::NoteBoard_NoteAxis*  ____noteAxisX;

/// @brief Field _noteAxisY, offset: 0x38, size: 0x8, def value: None
 ::VROSC::NoteBoard_NoteAxis*  ____noteAxisY;

/// @brief Field _noteAxisZ, offset: 0x40, size: 0x8, def value: None
 ::VROSC::NoteBoard_NoteAxis*  ____noteAxisZ;

/// @brief Field _noteAxes, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>  ____noteAxes;

/// @brief Field _primaryAxis, offset: 0x50, size: 0x4, def value: None
 ::VROSC::NoteBoard_Axis  ____primaryAxis;

/// @brief Field _controllerInputNode, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerInputNode>  ____controllerInputNode;

/// @brief Field _notefieldController, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  ____notefieldController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoard, ____scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard, ____startNote) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard, ____noteAxisX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard, ____noteAxisY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard, ____noteAxisZ) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard, ____noteAxes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard, ____primaryAxis) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard, ____controllerInputNode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoard, ____notefieldController) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoard, 0x68>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoard_Axis, "VROSC", "NoteBoard/Axis");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoard_PlayAxis, "VROSC", "NoteBoard/PlayAxis");
NEED_NO_BOX(::VROSC::NoteBoard);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoard*, "VROSC", "NoteBoard");
NEED_NO_BOX(::VROSC::NoteBoard_NoteAxis);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoard_NoteAxis*, "VROSC", "NoteBoard/NoteAxis");
