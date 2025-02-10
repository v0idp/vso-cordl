#pragma once
// IWYU pragma private; include "VROSC/UIInputBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIInputBox)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class MinMaxFloat;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class UIInputBox_AxisParameters;
}
namespace VROSC {
class UIInputBox_UIInputBoxData;
}
namespace VROSC {
class UIInputBox__GrabBoxRemotely_d__21;
}
namespace VROSC {
class UIInputBox__GrabBox_d__23;
}
// Forward declare root types
namespace VROSC {
class UIInputBox;
}
namespace VROSC {
class UIInputBox_AxisParameters;
}
namespace VROSC {
class UIInputBox_UIInputBoxData;
}
namespace VROSC {
class UIInputBox__GrabBoxRemotely_d__21;
}
namespace VROSC {
class UIInputBox__GrabBox_d__23;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIInputBox);
MARK_REF_PTR_T(::VROSC::UIInputBox_AxisParameters);
MARK_REF_PTR_T(::VROSC::UIInputBox_UIInputBoxData);
MARK_REF_PTR_T(::VROSC::UIInputBox__GrabBoxRemotely_d__21);
MARK_REF_PTR_T(::VROSC::UIInputBox__GrabBox_d__23);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIInputBox/AxisParameters
class CORDL_TYPE UIInputBox_AxisParameters : public ::System::Object {
public:
// Declarations
/// @brief Field AnimationCurve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnimationCurve, put=__cordl_internal_set_AnimationCurve)) ::UnityEngine::AnimationCurve*  AnimationCurve;

/// @brief Field Limits, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Limits, put=__cordl_internal_set_Limits)) ::VROSC::MinMaxFloat*  Limits;

/// @brief Method GetPosition, addr 0x1785350, size 0x2c, virtual false, abstract: false, final false
inline float_t GetPosition(float_t  value) ;

/// @brief Method GetValue, addr 0x17854f0, size 0x38, virtual false, abstract: false, final false
inline float_t GetValue(float_t  position) ;

static inline ::VROSC::UIInputBox_AxisParameters* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_AnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_AnimationCurve() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get_Limits() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get_Limits() ;

constexpr void __cordl_internal_set_AnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_Limits(::VROSC::MinMaxFloat*  value) ;

/// @brief Method .ctor, addr 0x1785598, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInputBox_AxisParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox_AxisParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputBox_AxisParameters(UIInputBox_AxisParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox_AxisParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputBox_AxisParameters(UIInputBox_AxisParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1315};

/// @brief Field AnimationCurve, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___AnimationCurve;

/// @brief Field Limits, offset: 0x18, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ___Limits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIInputBox_AxisParameters, ___AnimationCurve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox_AxisParameters, ___Limits) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIInputBox_AxisParameters, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIInputBox/UIInputBoxData
class CORDL_TYPE UIInputBox_UIInputBoxData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_IsUsingDepth)) bool  IsUsingDepth;

 __declspec(property(get=get_XParameters)) ::VROSC::UIInputBox_AxisParameters*  XParameters;

 __declspec(property(get=get_YParameters)) ::VROSC::UIInputBox_AxisParameters*  YParameters;

 __declspec(property(get=get_ZParameters)) ::VROSC::UIInputBox_AxisParameters*  ZParameters;

/// @brief Field _displayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _isUsingDepth, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isUsingDepth, put=__cordl_internal_set__isUsingDepth)) bool  _isUsingDepth;

/// @brief Field _xParameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__xParameters, put=__cordl_internal_set__xParameters)) ::VROSC::UIInputBox_AxisParameters*  _xParameters;

/// @brief Field _yParameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__yParameters, put=__cordl_internal_set__yParameters)) ::VROSC::UIInputBox_AxisParameters*  _yParameters;

/// @brief Field _zParameters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__zParameters, put=__cordl_internal_set__zParameters)) ::VROSC::UIInputBox_AxisParameters*  _zParameters;

static inline ::VROSC::UIInputBox_UIInputBoxData* New_ctor() ;

/// @brief Method SetDisplayName, addr 0x17855c8, size 0x8, virtual false, abstract: false, final false
inline void SetDisplayName(::StringW  displayName) ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr bool const& __cordl_internal_get__isUsingDepth() const;

constexpr bool& __cordl_internal_get__isUsingDepth() ;

constexpr ::VROSC::UIInputBox_AxisParameters* const& __cordl_internal_get__xParameters() const;

constexpr ::VROSC::UIInputBox_AxisParameters*& __cordl_internal_get__xParameters() ;

constexpr ::VROSC::UIInputBox_AxisParameters* const& __cordl_internal_get__yParameters() const;

constexpr ::VROSC::UIInputBox_AxisParameters*& __cordl_internal_get__yParameters() ;

constexpr ::VROSC::UIInputBox_AxisParameters* const& __cordl_internal_get__zParameters() const;

constexpr ::VROSC::UIInputBox_AxisParameters*& __cordl_internal_get__zParameters() ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__isUsingDepth(bool  value) ;

constexpr void __cordl_internal_set__xParameters(::VROSC::UIInputBox_AxisParameters*  value) ;

constexpr void __cordl_internal_set__yParameters(::VROSC::UIInputBox_AxisParameters*  value) ;

constexpr void __cordl_internal_set__zParameters(::VROSC::UIInputBox_AxisParameters*  value) ;

/// @brief Method .ctor, addr 0x17855d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x17855a0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_IsUsingDepth, addr 0x17855c0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsUsingDepth() ;

/// @brief Method get_XParameters, addr 0x17855a8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UIInputBox_AxisParameters* get_XParameters() ;

/// @brief Method get_YParameters, addr 0x17855b0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UIInputBox_AxisParameters* get_YParameters() ;

/// @brief Method get_ZParameters, addr 0x17855b8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UIInputBox_AxisParameters* get_ZParameters() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInputBox_UIInputBoxData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox_UIInputBoxData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputBox_UIInputBoxData(UIInputBox_UIInputBoxData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox_UIInputBoxData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputBox_UIInputBoxData(UIInputBox_UIInputBoxData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1316};

/// @brief Field _displayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____displayName;

/// @brief Field _xParameters, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UIInputBox_AxisParameters*  ____xParameters;

/// @brief Field _yParameters, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UIInputBox_AxisParameters*  ____yParameters;

/// @brief Field _zParameters, offset: 0x28, size: 0x8, def value: None
 ::VROSC::UIInputBox_AxisParameters*  ____zParameters;

/// @brief Field _isUsingDepth, offset: 0x30, size: 0x1, def value: None
 bool  ____isUsingDepth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIInputBox_UIInputBoxData, ____displayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox_UIInputBoxData, ____xParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox_UIInputBoxData, ____yParameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox_UIInputBoxData, ____zParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox_UIInputBoxData, ____isUsingDepth) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIInputBox_UIInputBoxData, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIInputBox/<GrabBox>d__23
class CORDL_TYPE UIInputBox__GrabBox_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UIInputBox>  __4__this;

/// @brief Field device, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityW<::VROSC::InputDevice>  device;

/// @brief Field grabbingButton, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbingButton, put=__cordl_internal_set_grabbingButton)) ::VROSC::TriggerButton  grabbingButton;

/// @brief Field pointing, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_pointing, put=__cordl_internal_set_pointing)) bool  pointing;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17855e4, size 0x354, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UIInputBox__GrabBox_d__23* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1785938, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1785940, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1785978, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17855e0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get_grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get_grabbingButton() ;

constexpr bool const& __cordl_internal_get_pointing() const;

constexpr bool& __cordl_internal_get_pointing() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UIInputBox>  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_grabbingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set_pointing(bool  value) ;

/// @brief Method .ctor, addr 0x17852a4, size 0x28, virtual false, abstract: false, final false
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
constexpr UIInputBox__GrabBox_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox__GrabBox_d__23", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputBox__GrabBox_d__23(UIInputBox__GrabBox_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox__GrabBox_d__23", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputBox__GrabBox_d__23(UIInputBox__GrabBox_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1317};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  _____4__this;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field grabbingButton, offset: 0x30, size: 0x4, def value: None
 ::VROSC::TriggerButton  ___grabbingButton;

/// @brief Field pointing, offset: 0x34, size: 0x1, def value: None
 bool  ___pointing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIInputBox__GrabBox_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox__GrabBox_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox__GrabBox_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox__GrabBox_d__23, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox__GrabBox_d__23, ___grabbingButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox__GrabBox_d__23, ___pointing) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIInputBox__GrabBox_d__23, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIInputBox/<GrabBoxRemotely>d__21
class CORDL_TYPE UIInputBox__GrabBoxRemotely_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UIInputBox>  __4__this;

/// @brief Field device, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityW<::VROSC::InputDevice>  device;

/// @brief Field grabbingButton, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbingButton, put=__cordl_internal_set_grabbingButton)) ::VROSC::TriggerButton  grabbingButton;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1785984, size 0x14c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UIInputBox__GrabBoxRemotely_d__21* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1785ad0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1785ad8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1785b10, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1785980, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get_grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get_grabbingButton() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UIInputBox>  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_grabbingButton(::VROSC::TriggerButton  value) ;

/// @brief Method .ctor, addr 0x178527c, size 0x28, virtual false, abstract: false, final false
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
constexpr UIInputBox__GrabBoxRemotely_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox__GrabBoxRemotely_d__21", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputBox__GrabBoxRemotely_d__21(UIInputBox__GrabBoxRemotely_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox__GrabBoxRemotely_d__21", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputBox__GrabBoxRemotely_d__21(UIInputBox__GrabBoxRemotely_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1318};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  _____4__this;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field grabbingButton, offset: 0x30, size: 0x4, def value: None
 ::VROSC::TriggerButton  ___grabbingButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIInputBox__GrabBoxRemotely_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox__GrabBoxRemotely_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox__GrabBoxRemotely_d__21, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox__GrabBoxRemotely_d__21, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox__GrabBoxRemotely_d__21, ___grabbingButton) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIInputBox__GrabBoxRemotely_d__21, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Vector3, VROSC.TriggerButton, VROSC.UIButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIInputBox
class CORDL_TYPE UIInputBox : public ::VROSC::UIButton {
public:
// Declarations
using AxisParameters = ::VROSC::UIInputBox_AxisParameters;

using UIInputBoxData = ::VROSC::UIInputBox_UIInputBoxData;

using _GrabBoxRemotely_d__21 = ::VROSC::UIInputBox__GrabBoxRemotely_d__21;

using _GrabBox_d__23 = ::VROSC::UIInputBox__GrabBox_d__23;

 __declspec(property(get=get_Data)) ::VROSC::UIInputBox_UIInputBoxData*  Data;

/// @brief Field OnValueChanged, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueChanged, put=__cordl_internal_set_OnValueChanged)) ::System::Action_1<::UnityEngine::Vector3>*  OnValueChanged;

 __declspec(property(get=get_Size)) ::UnityEngine::Vector2  Size;

/// @brief Field _data, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::VROSC::UIInputBox_UIInputBoxData*  _data;

/// @brief Field _grabbingButton, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabbingButton, put=__cordl_internal_set__grabbingButton)) ::VROSC::TriggerButton  _grabbingButton;

/// @brief Field _grabbingDevice, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingDevice, put=__cordl_internal_set__grabbingDevice)) ::UnityW<::VROSC::InputDevice>  _grabbingDevice;

/// @brief Field _normalIcon, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalIcon, put=__cordl_internal_set__normalIcon)) ::UnityW<::UnityEngine::GameObject>  _normalIcon;

/// @brief Field _offset, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector3  _offset;

/// @brief Field _rectTransform, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _selectedIcon, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedIcon, put=__cordl_internal_set__selectedIcon)) ::UnityW<::UnityEngine::GameObject>  _selectedIcon;

/// @brief Field _uiHelperActive, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get__uiHelperActive, put=__cordl_internal_set__uiHelperActive)) bool  _uiHelperActive;

/// @brief Field _value, offset 0xf0, size 0xc 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::UnityEngine::Vector3  _value;

/// @brief Method Awake, addr 0x1784c34, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonWasPressed, addr 0x1785050, size 0x130, virtual true, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData) ;

/// @brief Method GetPosition, addr 0x17852cc, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition() ;

/// @brief Method GetRectTransform, addr 0x1784c38, size 0x8c, virtual false, abstract: false, final false
inline void GetRectTransform() ;

/// @brief Method GetSize, addr 0x1784b50, size 0xdc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetSize() ;

/// @brief Method GrabBox, addr 0x17851f4, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabBox(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  grabbingButton, bool  pointing) ;

/// @brief Method GrabBoxRemotely, addr 0x1785180, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabBoxRemotely(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  grabbingButton) ;

/// @brief Method MarkerPositionChanged, addr 0x1785440, size 0xb0, virtual false, abstract: false, final false
inline void MarkerPositionChanged(::UnityEngine::Vector3  position) ;

static inline ::VROSC::UIInputBox* New_ctor() ;

/// @brief Method OnDisable, addr 0x1784de8, size 0x118, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1784cc4, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetValues, addr 0x1785418, size 0x28, virtual false, abstract: false, final false
inline void SetValues(float_t  x, float_t  y, float_t  z, bool  invoke) ;

/// @brief Method SetX, addr 0x178537c, size 0x34, virtual false, abstract: false, final false
inline void SetX(float_t  x, bool  invoke) ;

/// @brief Method SetY, addr 0x17853b0, size 0x34, virtual false, abstract: false, final false
inline void SetY(float_t  y, bool  invoke) ;

/// @brief Method SetZ, addr 0x17853e4, size 0x34, virtual false, abstract: false, final false
inline void SetZ(float_t  z, bool  invoke) ;

/// @brief Method StopGrabBox, addr 0x1784fa0, size 0xb0, virtual false, abstract: false, final false
inline void StopGrabBox(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

/// @brief Method StopGrabRemotely, addr 0x1784f00, size 0xa0, virtual false, abstract: false, final false
inline void StopGrabRemotely(::VROSC::InputDevice*  device) ;

constexpr ::System::Action_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnValueChanged() const;

constexpr ::System::Action_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnValueChanged() ;

constexpr ::VROSC::UIInputBox_UIInputBoxData* const& __cordl_internal_get__data() const;

constexpr ::VROSC::UIInputBox_UIInputBoxData*& __cordl_internal_get__data() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__grabbingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__grabbingButton() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabbingDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabbingDevice() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__normalIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__normalIcon() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__selectedIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__selectedIcon() ;

constexpr bool const& __cordl_internal_get__uiHelperActive() const;

constexpr bool& __cordl_internal_get__uiHelperActive() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__value() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set_OnValueChanged(::System::Action_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__data(::VROSC::UIInputBox_UIInputBoxData*  value) ;

constexpr void __cordl_internal_set__grabbingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__normalIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__selectedIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__uiHelperActive(bool  value) ;

constexpr void __cordl_internal_set__value(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1785528, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x1784c2c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::UIInputBox_UIInputBoxData* get_Data() ;

/// @brief Method get_Size, addr 0x1784b4c, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Size() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInputBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputBox(UIInputBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputBox(UIInputBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1319};

/// @brief Field _offset, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offset;

/// @brief Field _normalIcon, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____normalIcon;

/// @brief Field _selectedIcon, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____selectedIcon;

/// @brief Field _data, offset: 0xd0, size: 0x8, def value: None
 ::VROSC::UIInputBox_UIInputBoxData*  ____data;

/// @brief Field _grabbingDevice, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabbingDevice;

/// @brief Field _grabbingButton, offset: 0xe0, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____grabbingButton;

/// @brief Field _uiHelperActive, offset: 0xe4, size: 0x1, def value: None
 bool  ____uiHelperActive;

/// @brief Field _rectTransform, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _value, offset: 0xf0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____value;

/// @brief Field OnValueChanged, offset: 0x100, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Vector3>*  ___OnValueChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIInputBox, ____offset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox, ____normalIcon) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox, ____selectedIcon) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox, ____data) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox, ____grabbingDevice) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox, ____grabbingButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox, ____uiHelperActive) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox, ____rectTransform) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox, ____value) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBox, ___OnValueChanged) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIInputBox, 0x108>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIInputBox);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInputBox*, "VROSC", "UIInputBox");
NEED_NO_BOX(::VROSC::UIInputBox_AxisParameters);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInputBox_AxisParameters*, "VROSC", "UIInputBox/AxisParameters");
NEED_NO_BOX(::VROSC::UIInputBox_UIInputBoxData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInputBox_UIInputBoxData*, "VROSC", "UIInputBox/UIInputBoxData");
NEED_NO_BOX(::VROSC::UIInputBox__GrabBoxRemotely_d__21);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInputBox__GrabBoxRemotely_d__21*, "VROSC", "UIInputBox/<GrabBoxRemotely>d__21");
NEED_NO_BOX(::VROSC::UIInputBox__GrabBox_d__23);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInputBox__GrabBox_d__23*, "VROSC", "UIInputBox/<GrabBox>d__23");
