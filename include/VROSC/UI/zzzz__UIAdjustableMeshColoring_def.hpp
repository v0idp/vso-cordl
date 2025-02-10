#pragma once
// IWYU pragma private; include "VROSC/UI/UIAdjustableMeshColoring.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/UI/zzzz__UIInteractableColoring_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIAdjustableMeshColoring)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class UIAdjustableMeshColoring__InteractionFade_d__15;
}
namespace VROSC::UI {
class UIMaterialSettings;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC::UI {
class UIAdjustableMeshColoring;
}
namespace VROSC::UI {
class UIAdjustableMeshColoring__InteractionFade_d__15;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIAdjustableMeshColoring);
MARK_REF_PTR_T(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIAdjustableMeshColoring/<InteractionFade>d__15
class CORDL_TYPE UIAdjustableMeshColoring__InteractionFade_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  __4__this;

/// @brief Field <fadeProgress>5__6, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeProgress_5__6, put=__cordl_internal_set__fadeProgress_5__6)) float_t  _fadeProgress_5__6;

/// @brief Field <fadeTime>5__5, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeTime_5__5, put=__cordl_internal_set__fadeTime_5__5)) float_t  _fadeTime_5__5;

/// @brief Field <h>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__h_5__2, put=__cordl_internal_set__h_5__2)) float_t  _h_5__2;

/// @brief Field <startS>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startS_5__3, put=__cordl_internal_set__startS_5__3)) float_t  _startS_5__3;

/// @brief Field <startV>5__4, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startV_5__4, put=__cordl_internal_set__startV_5__4)) float_t  _startV_5__4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17e51e4, size 0x148, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17e532c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17e5334, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17e536c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17e51e0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UI::UIAdjustableMeshColoring> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__fadeProgress_5__6() const;

constexpr float_t& __cordl_internal_get__fadeProgress_5__6() ;

constexpr float_t const& __cordl_internal_get__fadeTime_5__5() const;

constexpr float_t& __cordl_internal_get__fadeTime_5__5() ;

constexpr float_t const& __cordl_internal_get__h_5__2() const;

constexpr float_t& __cordl_internal_get__h_5__2() ;

constexpr float_t const& __cordl_internal_get__startS_5__3() const;

constexpr float_t& __cordl_internal_get__startS_5__3() ;

constexpr float_t const& __cordl_internal_get__startV_5__4() const;

constexpr float_t& __cordl_internal_get__startV_5__4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  value) ;

constexpr void __cordl_internal_set__fadeProgress_5__6(float_t  value) ;

constexpr void __cordl_internal_set__fadeTime_5__5(float_t  value) ;

constexpr void __cordl_internal_set__h_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startS_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startV_5__4(float_t  value) ;

/// @brief Method .ctor, addr 0x17e4ea8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIAdjustableMeshColoring__InteractionFade_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIAdjustableMeshColoring__InteractionFade_d__15", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIAdjustableMeshColoring__InteractionFade_d__15(UIAdjustableMeshColoring__InteractionFade_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIAdjustableMeshColoring__InteractionFade_d__15", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIAdjustableMeshColoring__InteractionFade_d__15(UIAdjustableMeshColoring__InteractionFade_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1602};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  _____4__this;

/// @brief Field <h>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____h_5__2;

/// @brief Field <startS>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____startS_5__3;

/// @brief Field <startV>5__4, offset: 0x30, size: 0x4, def value: None
 float_t  ____startV_5__4;

/// @brief Field <fadeTime>5__5, offset: 0x34, size: 0x4, def value: None
 float_t  ____fadeTime_5__5;

/// @brief Field <fadeProgress>5__6, offset: 0x38, size: 0x4, def value: None
 float_t  ____fadeProgress_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15, ____h_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15, ____startS_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15, ____startV_5__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15, ____fadeTime_5__5) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15, ____fadeProgress_5__6) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15, 0x40>, "Size mismatch!");

} // namespace end def VROSC::UI
// Dependencies VROSC.UI.UIInteractableColoring
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIAdjustableMeshColoring
class CORDL_TYPE UIAdjustableMeshColoring : public ::VROSC::UI::UIInteractableColoring {
public:
// Declarations
using _InteractionFade_d__15 = ::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15;

 __declspec(property(get=get_FadeDone)) bool  FadeDone;

/// @brief Field _adjustableMesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

/// @brief Field _hideWhenNotHovering, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideWhenNotHovering, put=__cordl_internal_set__hideWhenNotHovering)) bool  _hideWhenNotHovering;

/// @brief Field _interactionFadeDone, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__interactionFadeDone, put=__cordl_internal_set__interactionFadeDone)) bool  _interactionFadeDone;

/// @brief Field _isInteracting, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInteracting, put=__cordl_internal_set__isInteracting)) bool  _isInteracting;

/// @brief Field _saturationChange, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__saturationChange, put=__cordl_internal_set__saturationChange)) float_t  _saturationChange;

/// @brief Field _targetS, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetS, put=__cordl_internal_set__targetS)) float_t  _targetS;

/// @brief Field _targetV, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetV, put=__cordl_internal_set__targetV)) float_t  _targetV;

/// @brief Field _transparencySwitch, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__transparencySwitch, put=__cordl_internal_set__transparencySwitch)) ::UnityW<::VROSC::UI::UIMaterialSettings>  _transparencySwitch;

/// @brief Field _valueChange, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueChange, put=__cordl_internal_set__valueChange)) float_t  _valueChange;

/// @brief Method ApplyColor, addr 0x17e4ed0, size 0x138, virtual true, abstract: false, final false
inline void ApplyColor(::UnityEngine::Color  color) ;

/// @brief Method Awake, addr 0x17e4768, size 0xec, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetValues, addr 0x17e502c, size 0xdc, virtual false, abstract: false, final false
inline void GetValues() ;

/// @brief Method InteractionFade, addr 0x17e4e48, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* InteractionFade() ;

static inline ::VROSC::UI::UIAdjustableMeshColoring* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17e4854, size 0xf4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Set, addr 0x17e5108, size 0xb0, virtual false, abstract: false, final false
inline void Set() ;

/// @brief Method SetInteraction, addr 0x17e4d0c, size 0xec, virtual false, abstract: false, final false
inline void SetInteraction(bool  interact, bool  fade) ;

/// @brief Method UpdateColor, addr 0x17e4a50, size 0x10c, virtual true, abstract: false, final false
inline void UpdateColor() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr bool const& __cordl_internal_get__hideWhenNotHovering() const;

constexpr bool& __cordl_internal_get__hideWhenNotHovering() ;

constexpr bool const& __cordl_internal_get__interactionFadeDone() const;

constexpr bool& __cordl_internal_get__interactionFadeDone() ;

constexpr bool const& __cordl_internal_get__isInteracting() const;

constexpr bool& __cordl_internal_get__isInteracting() ;

constexpr float_t const& __cordl_internal_get__saturationChange() const;

constexpr float_t& __cordl_internal_get__saturationChange() ;

constexpr float_t const& __cordl_internal_get__targetS() const;

constexpr float_t& __cordl_internal_get__targetS() ;

constexpr float_t const& __cordl_internal_get__targetV() const;

constexpr float_t& __cordl_internal_get__targetV() ;

constexpr ::UnityW<::VROSC::UI::UIMaterialSettings> const& __cordl_internal_get__transparencySwitch() const;

constexpr ::UnityW<::VROSC::UI::UIMaterialSettings>& __cordl_internal_get__transparencySwitch() ;

constexpr float_t const& __cordl_internal_get__valueChange() const;

constexpr float_t& __cordl_internal_get__valueChange() ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__hideWhenNotHovering(bool  value) ;

constexpr void __cordl_internal_set__interactionFadeDone(bool  value) ;

constexpr void __cordl_internal_set__isInteracting(bool  value) ;

constexpr void __cordl_internal_set__saturationChange(float_t  value) ;

constexpr void __cordl_internal_set__targetS(float_t  value) ;

constexpr void __cordl_internal_set__targetV(float_t  value) ;

constexpr void __cordl_internal_set__transparencySwitch(::UnityW<::VROSC::UI::UIMaterialSettings>  value) ;

constexpr void __cordl_internal_set__valueChange(float_t  value) ;

/// @brief Method .ctor, addr 0x17e51b8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FadeDone, addr 0x17e4760, size 0x8, virtual false, abstract: false, final false
inline bool get_FadeDone() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIAdjustableMeshColoring() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIAdjustableMeshColoring", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIAdjustableMeshColoring(UIAdjustableMeshColoring && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIAdjustableMeshColoring", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIAdjustableMeshColoring(UIAdjustableMeshColoring const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1603};

/// @brief Field _adjustableMesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

/// @brief Field _transparencySwitch, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIMaterialSettings>  ____transparencySwitch;

/// @brief Field _hideWhenNotHovering, offset: 0x60, size: 0x1, def value: None
 bool  ____hideWhenNotHovering;

/// @brief Field _saturationChange, offset: 0x64, size: 0x4, def value: None
 float_t  ____saturationChange;

/// @brief Field _valueChange, offset: 0x68, size: 0x4, def value: None
 float_t  ____valueChange;

/// @brief Field _targetS, offset: 0x6c, size: 0x4, def value: None
 float_t  ____targetS;

/// @brief Field _targetV, offset: 0x70, size: 0x4, def value: None
 float_t  ____targetV;

/// @brief Field _interactionFadeDone, offset: 0x74, size: 0x1, def value: None
 bool  ____interactionFadeDone;

/// @brief Field _isInteracting, offset: 0x75, size: 0x1, def value: None
 bool  ____isInteracting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring, ____adjustableMesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring, ____transparencySwitch) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring, ____hideWhenNotHovering) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring, ____saturationChange) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring, ____valueChange) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring, ____targetS) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring, ____targetV) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring, ____interactionFadeDone) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIAdjustableMeshColoring, ____isInteracting) == 0x75, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIAdjustableMeshColoring, 0x78>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIAdjustableMeshColoring);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIAdjustableMeshColoring*, "VROSC.UI", "UIAdjustableMeshColoring");
NEED_NO_BOX(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIAdjustableMeshColoring__InteractionFade_d__15*, "VROSC.UI", "UIAdjustableMeshColoring/<InteractionFade>d__15");
