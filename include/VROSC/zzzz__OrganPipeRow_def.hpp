#pragma once
// IWYU pragma private; include "VROSC/OrganPipeRow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__Axis_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OrganPipeRow)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class MinMaxFloat;
}
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
class NoteFieldData;
}
namespace VROSC {
class NoteFieldMonitor;
}
namespace VROSC {
class NoteFieldParameters;
}
namespace VROSC {
struct OrganPipeRow_Alignment;
}
namespace VROSC {
class OrganPipe;
}
namespace VROSC {
class SynthController;
}
// Forward declare root types
namespace VROSC {
struct OrganPipeRow_Alignment;
}
namespace VROSC {
class OrganPipeRow;
}
// Write type traits
MARK_VAL_T(::VROSC::OrganPipeRow_Alignment);
MARK_REF_PTR_T(::VROSC::OrganPipeRow);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.OrganPipeRow/Alignment
struct CORDL_TYPE OrganPipeRow_Alignment {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OrganPipeRow_Alignment_Unwrapped
enum struct __OrganPipeRow_Alignment_Unwrapped : int32_t {
__E_Center = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OrganPipeRow_Alignment_Unwrapped () const noexcept {
return static_cast<__OrganPipeRow_Alignment_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OrganPipeRow_Alignment() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OrganPipeRow_Alignment(int32_t  value__) noexcept;

/// @brief Field Center value: I32(0)
static ::VROSC::OrganPipeRow_Alignment const Center;

/// @brief Field Left value: I32(1)
static ::VROSC::OrganPipeRow_Alignment const Left;

/// @brief Field Right value: I32(2)
static ::VROSC::OrganPipeRow_Alignment const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OrganPipeRow_Alignment, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OrganPipeRow_Alignment, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, VROSC.Axis, VROSC.OrganPipeRow::Alignment
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OrganPipeRow
class CORDL_TYPE OrganPipeRow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Alignment = ::VROSC::OrganPipeRow_Alignment;

 __declspec(property(get=get_Pipes, put=set_Pipes)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*  Pipes;

 __declspec(property(get=get_PreviewPipes)) int32_t  PreviewPipes;

/// @brief Field <Pipes>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Pipes_k__BackingField, put=__cordl_internal_set__Pipes_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*  _Pipes_k__BackingField;

/// @brief Field _PlayingColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__PlayingColor, put=__cordl_internal_set__PlayingColor)) ::UnityEngine::Color  _PlayingColor;

/// @brief Field _alignment, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__alignment, put=__cordl_internal_set__alignment)) ::VROSC::OrganPipeRow_Alignment  _alignment;

/// @brief Field _axis, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::VROSC::Axis  _axis;

/// @brief Field _base, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__base, put=__cordl_internal_set__base)) ::VROSC::MinMaxFloat*  _base;

/// @brief Field _baseCurve, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseCurve, put=__cordl_internal_set__baseCurve)) ::UnityEngine::AnimationCurve*  _baseCurve;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::VROSC::NoteBoardNoteController>  _controller;

/// @brief Field _diameter, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__diameter, put=__cordl_internal_set__diameter)) float_t  _diameter;

/// @brief Field _height, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) ::VROSC::MinMaxFloat*  _height;

/// @brief Field _heightCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__heightCurve, put=__cordl_internal_set__heightCurve)) ::UnityEngine::AnimationCurve*  _heightCurve;

/// @brief Field _instrument, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrument, put=__cordl_internal_set__instrument)) ::UnityW<::VROSC::SynthController>  _instrument;

/// @brief Field _monitor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__monitor, put=__cordl_internal_set__monitor)) ::UnityW<::VROSC::NoteFieldMonitor>  _monitor;

/// @brief Field _monitorIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__monitorIndex, put=__cordl_internal_set__monitorIndex)) int32_t  _monitorIndex;

/// @brief Field _octaveAtSetup, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__octaveAtSetup, put=__cordl_internal_set__octaveAtSetup)) int32_t  _octaveAtSetup;

/// @brief Field _offColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__offColor, put=__cordl_internal_set__offColor)) ::UnityEngine::Color  _offColor;

/// @brief Field _pipePrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pipePrefab, put=__cordl_internal_set__pipePrefab)) ::UnityW<::VROSC::OrganPipe>  _pipePrefab;

/// @brief Field _preview, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__preview, put=__cordl_internal_set__preview)) int32_t  _preview;

/// @brief Field _setupDone, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__setupDone, put=__cordl_internal_set__setupDone)) bool  _setupDone;

/// @brief Field _step, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__step, put=__cordl_internal_set__step)) float_t  _step;

/// @brief Method Awake, addr 0x17af428, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clear, addr 0x17b04e0, size 0x1b4, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreatePipes, addr 0x17af7f8, size 0x3b0, virtual false, abstract: false, final false
inline void CreatePipes(int32_t  pipeCount) ;

/// @brief Method GetAxisCount, addr 0x17afe48, size 0x60, virtual false, abstract: false, final false
inline int32_t GetAxisCount(::VROSC::NoteFieldParameters*  parameters) ;

/// @brief Method GetNoteDataByAxis, addr 0x17afea8, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetNoteDataByAxis(::VROSC::NoteFieldData*  data, int32_t  index) ;

/// @brief Method GetPosByAlignment, addr 0x17afba8, size 0x17c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosByAlignment(int32_t  index, int32_t  count) ;

/// @brief Method IsPlayingPipe, addr 0x17af784, size 0x74, virtual false, abstract: false, final false
inline bool IsPlayingPipe(::VROSC::OrganPipe*  pipe, int32_t  leftNote, int32_t  rightNote) ;

static inline ::VROSC::OrganPipeRow* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x17aff58, size 0x43c, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method SetFullyDone, addr 0x17b0394, size 0x14c, virtual false, abstract: false, final false
inline void SetFullyDone() ;

/// @brief Method Setup, addr 0x17af42c, size 0x120, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Update, addr 0x17af54c, size 0x238, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePipes, addr 0x17afd58, size 0xf0, virtual false, abstract: false, final false
inline void UpdatePipes(::VROSC::NoteFieldData*  data, ::VROSC::NoteFieldParameters*  parameters) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>* const& __cordl_internal_get__Pipes_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*& __cordl_internal_get__Pipes_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__PlayingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__PlayingColor() ;

constexpr ::VROSC::OrganPipeRow_Alignment const& __cordl_internal_get__alignment() const;

constexpr ::VROSC::OrganPipeRow_Alignment& __cordl_internal_get__alignment() ;

constexpr ::VROSC::Axis const& __cordl_internal_get__axis() const;

constexpr ::VROSC::Axis& __cordl_internal_get__axis() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__base() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__base() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__baseCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__baseCurve() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get__controller() ;

constexpr float_t const& __cordl_internal_get__diameter() const;

constexpr float_t& __cordl_internal_get__diameter() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__height() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__height() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__heightCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__heightCurve() ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__instrument() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__instrument() ;

constexpr ::UnityW<::VROSC::NoteFieldMonitor> const& __cordl_internal_get__monitor() const;

constexpr ::UnityW<::VROSC::NoteFieldMonitor>& __cordl_internal_get__monitor() ;

constexpr int32_t const& __cordl_internal_get__monitorIndex() const;

constexpr int32_t& __cordl_internal_get__monitorIndex() ;

constexpr int32_t const& __cordl_internal_get__octaveAtSetup() const;

constexpr int32_t& __cordl_internal_get__octaveAtSetup() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__offColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__offColor() ;

constexpr ::UnityW<::VROSC::OrganPipe> const& __cordl_internal_get__pipePrefab() const;

constexpr ::UnityW<::VROSC::OrganPipe>& __cordl_internal_get__pipePrefab() ;

constexpr int32_t const& __cordl_internal_get__preview() const;

constexpr int32_t& __cordl_internal_get__preview() ;

constexpr bool const& __cordl_internal_get__setupDone() const;

constexpr bool& __cordl_internal_get__setupDone() ;

constexpr float_t const& __cordl_internal_get__step() const;

constexpr float_t& __cordl_internal_get__step() ;

constexpr void __cordl_internal_set__Pipes_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*  value) ;

constexpr void __cordl_internal_set__PlayingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__alignment(::VROSC::OrganPipeRow_Alignment  value) ;

constexpr void __cordl_internal_set__axis(::VROSC::Axis  value) ;

constexpr void __cordl_internal_set__base(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__baseCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

constexpr void __cordl_internal_set__diameter(float_t  value) ;

constexpr void __cordl_internal_set__height(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__heightCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__instrument(::UnityW<::VROSC::SynthController>  value) ;

constexpr void __cordl_internal_set__monitor(::UnityW<::VROSC::NoteFieldMonitor>  value) ;

constexpr void __cordl_internal_set__monitorIndex(int32_t  value) ;

constexpr void __cordl_internal_set__octaveAtSetup(int32_t  value) ;

constexpr void __cordl_internal_set__offColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pipePrefab(::UnityW<::VROSC::OrganPipe>  value) ;

constexpr void __cordl_internal_set__preview(int32_t  value) ;

constexpr void __cordl_internal_set__setupDone(bool  value) ;

constexpr void __cordl_internal_set__step(float_t  value) ;

/// @brief Method .ctor, addr 0x17b0694, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Pipes, addr 0x17af420, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>* get_Pipes() ;

/// @brief Method get_PreviewPipes, addr 0x17af410, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PreviewPipes() ;

/// @brief Method set_Pipes, addr 0x17af418, size 0x8, virtual false, abstract: false, final false
inline void set_Pipes(::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrganPipeRow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrganPipeRow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrganPipeRow(OrganPipeRow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrganPipeRow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrganPipeRow(OrganPipeRow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1432};

/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  ____controller;

/// @brief Field _instrument, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____instrument;

/// @brief Field _pipePrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::OrganPipe>  ____pipePrefab;

/// @brief Field _monitor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteFieldMonitor>  ____monitor;

/// @brief Field _monitorIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ____monitorIndex;

/// @brief Field _height, offset: 0x48, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____height;

/// @brief Field _base, offset: 0x50, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____base;

/// @brief Field _heightCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____heightCurve;

/// @brief Field _baseCurve, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____baseCurve;

/// @brief Field _diameter, offset: 0x68, size: 0x4, def value: None
 float_t  ____diameter;

/// @brief Field _step, offset: 0x6c, size: 0x4, def value: None
 float_t  ____step;

/// @brief Field _alignment, offset: 0x70, size: 0x4, def value: None
 ::VROSC::OrganPipeRow_Alignment  ____alignment;

/// @brief Field _axis, offset: 0x74, size: 0x4, def value: None
 ::VROSC::Axis  ____axis;

/// @brief Field _offColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ____offColor;

/// @brief Field _PlayingColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ____PlayingColor;

/// @brief Field _preview, offset: 0x98, size: 0x4, def value: None
 int32_t  ____preview;

/// @brief Field _octaveAtSetup, offset: 0x9c, size: 0x4, def value: None
 int32_t  ____octaveAtSetup;

/// @brief Field _setupDone, offset: 0xa0, size: 0x1, def value: None
 bool  ____setupDone;

/// @brief Field <Pipes>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::OrganPipe>>*  ____Pipes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OrganPipeRow, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____instrument) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____pipePrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____monitor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____monitorIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____height) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____base) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____heightCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____baseCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____diameter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____step) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____alignment) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____axis) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____offColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____PlayingColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____preview) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____octaveAtSetup) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____setupDone) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeRow, ____Pipes_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OrganPipeRow, 0xb0>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OrganPipeRow_Alignment, "VROSC", "OrganPipeRow/Alignment");
NEED_NO_BOX(::VROSC::OrganPipeRow);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OrganPipeRow*, "VROSC", "OrganPipeRow");
