#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/GlobalColorShiftEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/AudioReactive/zzzz__CoroutineDrivenEffect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalColorShiftEffect)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace VROSC::AudioReactive {
class AudioReactiveBehaviour;
}
namespace VROSC::AudioReactive {
class GlobalColorEffectData;
}
namespace VROSC::AudioReactive {
class GlobalColorShiftEffect__SpecificFlow_d__8;
}
namespace VROSC::AudioReactive {
class GlobalShiftColorData;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class GlobalColorShiftEffect;
}
namespace VROSC::AudioReactive {
class GlobalColorShiftEffect__SpecificFlow_d__8;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalColorShiftEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalColorShiftEffect/<SpecificFlow>d__8
class CORDL_TYPE GlobalColorShiftEffect__SpecificFlow_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::GlobalColorShiftEffect*  __4__this;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d9fa8, size 0x184, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17da1f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17da1fc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17da234, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d9fa4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::GlobalColorShiftEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::GlobalColorShiftEffect*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::GlobalColorShiftEffect*  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17d9f74, size 0x28, virtual false, abstract: false, final false
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
constexpr GlobalColorShiftEffect__SpecificFlow_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorShiftEffect__SpecificFlow_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorShiftEffect__SpecificFlow_d__8(GlobalColorShiftEffect__SpecificFlow_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorShiftEffect__SpecificFlow_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorShiftEffect__SpecificFlow_d__8(GlobalColorShiftEffect__SpecificFlow_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1556};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::GlobalColorShiftEffect*  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8, 0x30>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.CoroutineDrivenEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalColorShiftEffect
class CORDL_TYPE GlobalColorShiftEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
public:
// Declarations
using _SpecificFlow_d__8 = ::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData>  Data;

/// @brief Field _currentColorSet, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentColorSet, put=__cordl_internal_set__currentColorSet)) int32_t  _currentColorSet;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData>  _data;

/// @brief Field _shiftColorDatas, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__shiftColorDatas, put=__cordl_internal_set__shiftColorDatas)) ::ArrayW<::VROSC::AudioReactive::GlobalShiftColorData*,::Array<::VROSC::AudioReactive::GlobalShiftColorData*>*>  _shiftColorDatas;

static inline ::VROSC::AudioReactive::GlobalColorShiftEffect* New_ctor() ;

/// @brief Method SetNewGlobalColors, addr 0x17d9c2c, size 0x1c0, virtual false, abstract: false, final false
inline void SetNewGlobalColors() ;

/// @brief Method Setup, addr 0x17d9a70, size 0x138, virtual true, abstract: false, final false
inline void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour*  behaviour) ;

/// @brief Method SpecificFlow, addr 0x17d9f14, size 0x60, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

/// @brief Method Update, addr 0x17d9dec, size 0x68, virtual true, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__currentColorSet() const;

constexpr int32_t& __cordl_internal_get__currentColorSet() ;

constexpr ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData>& __cordl_internal_get__data() ;

constexpr ::ArrayW<::VROSC::AudioReactive::GlobalShiftColorData*,::Array<::VROSC::AudioReactive::GlobalShiftColorData*>*> const& __cordl_internal_get__shiftColorDatas() const;

constexpr ::ArrayW<::VROSC::AudioReactive::GlobalShiftColorData*,::Array<::VROSC::AudioReactive::GlobalShiftColorData*>*>& __cordl_internal_get__shiftColorDatas() ;

constexpr void __cordl_internal_set__currentColorSet(int32_t  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::GlobalColorEffectData>  value) ;

constexpr void __cordl_internal_set__shiftColorDatas(::ArrayW<::VROSC::AudioReactive::GlobalShiftColorData*,::Array<::VROSC::AudioReactive::GlobalShiftColorData*>*>  value) ;

/// @brief Method .ctor, addr 0x17d9f9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17d9a68, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData> get_Data() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorShiftEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorShiftEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorShiftEffect(GlobalColorShiftEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorShiftEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorShiftEffect(GlobalColorShiftEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1557};

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::GlobalColorEffectData>  ____data;

/// @brief Field _shiftColorDatas, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::VROSC::AudioReactive::GlobalShiftColorData*,::Array<::VROSC::AudioReactive::GlobalShiftColorData*>*>  ____shiftColorDatas;

/// @brief Field _currentColorSet, offset: 0x40, size: 0x4, def value: None
 int32_t  ____currentColorSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalColorShiftEffect, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorShiftEffect, ____shiftColorDatas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorShiftEffect, ____currentColorSet) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalColorShiftEffect, 0x48>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::GlobalColorShiftEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorShiftEffect*, "VROSC.AudioReactive", "GlobalColorShiftEffect");
NEED_NO_BOX(::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorShiftEffect__SpecificFlow_d__8*, "VROSC.AudioReactive", "GlobalColorShiftEffect/<SpecificFlow>d__8");
