#pragma once
// IWYU pragma private; include "VROSC/GlobalColorController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalColorController)
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
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Gradient;
}
namespace VROSC {
class BeatGradient_GlobalColorController__PerformBeat_d__8;
}
namespace VROSC {
class GlobalColorController_BeatGradient;
}
// Forward declare root types
namespace VROSC {
class BeatGradient_GlobalColorController__PerformBeat_d__8;
}
namespace VROSC {
class GlobalColorController;
}
namespace VROSC {
class GlobalColorController_BeatGradient;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8);
MARK_REF_PTR_T(::VROSC::GlobalColorController);
MARK_REF_PTR_T(::VROSC::GlobalColorController_BeatGradient);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GlobalColorController/BeatGradient/<PerformBeat>d__8
class CORDL_TYPE BeatGradient_GlobalColorController__PerformBeat_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::GlobalColorController_BeatGradient*  __4__this;

/// @brief Field <time>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field multiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_multiplier, put=__cordl_internal_set_multiplier)) float_t  multiplier;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17cfe70, size 0x150, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17cffc0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17cffc8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d0000, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17cfe6c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::GlobalColorController_BeatGradient* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::GlobalColorController_BeatGradient*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr float_t const& __cordl_internal_get_multiplier() const;

constexpr float_t& __cordl_internal_get_multiplier() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::GlobalColorController_BeatGradient*  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set_multiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x17cfe44, size 0x28, virtual false, abstract: false, final false
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
constexpr BeatGradient_GlobalColorController__PerformBeat_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatGradient_GlobalColorController__PerformBeat_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatGradient_GlobalColorController__PerformBeat_d__8(BeatGradient_GlobalColorController__PerformBeat_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatGradient_GlobalColorController__PerformBeat_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatGradient_GlobalColorController__PerformBeat_d__8(BeatGradient_GlobalColorController__PerformBeat_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1480};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::GlobalColorController_BeatGradient*  _____4__this;

/// @brief Field multiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ___multiplier;

/// @brief Field <time>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8, ___multiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8, ____time_5__2) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GlobalColorController/BeatGradient
class CORDL_TYPE GlobalColorController_BeatGradient : public ::System::Object {
public:
// Declarations
using _PerformBeat_d__8 = ::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8;

 __declspec(property(get=get_Beat)) int32_t  Beat;

/// @brief Field BeatCoroutine, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BeatCoroutine, put=__cordl_internal_set_BeatCoroutine)) ::UnityEngine::Coroutine*  BeatCoroutine;

/// @brief Field OnColorChange, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnColorChange, put=__cordl_internal_set_OnColorChange)) ::System::Action_1<::UnityEngine::Color>*  OnColorChange;

/// @brief Field _beat, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__beat, put=__cordl_internal_set__beat)) int32_t  _beat;

/// @brief Field _beatTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__beatTime, put=__cordl_internal_set__beatTime)) float_t  _beatTime;

/// @brief Field _gradient, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__gradient, put=__cordl_internal_set__gradient)) ::UnityEngine::Gradient*  _gradient;

/// @brief Field _value, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::StringW  _value;

static inline ::VROSC::GlobalColorController_BeatGradient* New_ctor() ;

/// @brief Method PerformBeat, addr 0x17bae5c, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PerformBeat(float_t  multiplier) ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_BeatCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_BeatCoroutine() ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_OnColorChange() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_OnColorChange() ;

constexpr int32_t const& __cordl_internal_get__beat() const;

constexpr int32_t& __cordl_internal_get__beat() ;

constexpr float_t const& __cordl_internal_get__beatTime() const;

constexpr float_t& __cordl_internal_get__beatTime() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__gradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__gradient() ;

constexpr ::StringW const& __cordl_internal_get__value() const;

constexpr ::StringW& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set_BeatCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_OnColorChange(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__beat(int32_t  value) ;

constexpr void __cordl_internal_set__beatTime(float_t  value) ;

constexpr void __cordl_internal_set__gradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__value(::StringW  value) ;

/// @brief Method .ctor, addr 0x17bafe4, size 0x2cc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Beat, addr 0x17bafdc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Beat() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorController_BeatGradient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorController_BeatGradient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorController_BeatGradient(GlobalColorController_BeatGradient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorController_BeatGradient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorController_BeatGradient(GlobalColorController_BeatGradient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1481};

/// @brief Field _beat, offset: 0x10, size: 0x4, def value: None
 int32_t  ____beat;

/// @brief Field _gradient, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____gradient;

/// @brief Field _beatTime, offset: 0x20, size: 0x4, def value: None
 float_t  ____beatTime;

/// @brief Field _value, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____value;

/// @brief Field OnColorChange, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ___OnColorChange;

/// @brief Field BeatCoroutine, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___BeatCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GlobalColorController_BeatGradient, ____beat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorController_BeatGradient, ____gradient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorController_BeatGradient, ____beatTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorController_BeatGradient, ____value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorController_BeatGradient, ___OnColorChange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorController_BeatGradient, ___BeatCoroutine) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GlobalColorController_BeatGradient, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GlobalColorController
class CORDL_TYPE GlobalColorController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BeatGradient = ::VROSC::GlobalColorController_BeatGradient;

 __declspec(property(get=get_BeatGradients)) ::ArrayW<::VROSC::GlobalColorController_BeatGradient*,::Array<::VROSC::GlobalColorController_BeatGradient*>*>  BeatGradients;

/// @brief Field _beatGradients, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatGradients, put=__cordl_internal_set__beatGradients)) ::ArrayW<::VROSC::GlobalColorController_BeatGradient*,::Array<::VROSC::GlobalColorController_BeatGradient*>*>  _beatGradients;

/// @brief Field _darkenOnMirror, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__darkenOnMirror, put=__cordl_internal_set__darkenOnMirror)) float_t  _darkenOnMirror;

static inline ::VROSC::GlobalColorController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17baed4, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SendBeat, addr 0x17bad44, size 0x118, virtual false, abstract: false, final false
inline void SendBeat(int32_t  beat) ;

/// @brief Method Start, addr 0x17bac4c, size 0xf8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::VROSC::GlobalColorController_BeatGradient*,::Array<::VROSC::GlobalColorController_BeatGradient*>*> const& __cordl_internal_get__beatGradients() const;

constexpr ::ArrayW<::VROSC::GlobalColorController_BeatGradient*,::Array<::VROSC::GlobalColorController_BeatGradient*>*>& __cordl_internal_get__beatGradients() ;

constexpr float_t const& __cordl_internal_get__darkenOnMirror() const;

constexpr float_t& __cordl_internal_get__darkenOnMirror() ;

constexpr void __cordl_internal_set__beatGradients(::ArrayW<::VROSC::GlobalColorController_BeatGradient*,::Array<::VROSC::GlobalColorController_BeatGradient*>*>  value) ;

constexpr void __cordl_internal_set__darkenOnMirror(float_t  value) ;

/// @brief Method .ctor, addr 0x17bafcc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BeatGradients, addr 0x17bac44, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::VROSC::GlobalColorController_BeatGradient*,::Array<::VROSC::GlobalColorController_BeatGradient*>*> get_BeatGradients() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorController(GlobalColorController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorController(GlobalColorController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1482};

/// @brief Field _beatGradients, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::VROSC::GlobalColorController_BeatGradient*,::Array<::VROSC::GlobalColorController_BeatGradient*>*>  ____beatGradients;

/// @brief Field _darkenOnMirror, offset: 0x28, size: 0x4, def value: None
 float_t  ____darkenOnMirror;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GlobalColorController, ____beatGradients) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorController, ____darkenOnMirror) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GlobalColorController, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BeatGradient_GlobalColorController__PerformBeat_d__8*, "VROSC", "GlobalColorController/BeatGradient/<PerformBeat>d__8");
NEED_NO_BOX(::VROSC::GlobalColorController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalColorController*, "VROSC", "GlobalColorController");
NEED_NO_BOX(::VROSC::GlobalColorController_BeatGradient);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalColorController_BeatGradient*, "VROSC", "GlobalColorController/BeatGradient");
