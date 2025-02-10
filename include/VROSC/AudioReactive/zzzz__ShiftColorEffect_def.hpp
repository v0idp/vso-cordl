#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ShiftColorEffect.hpp"
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
CORDL_MODULE_EXPORT(ShiftColorEffect)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC::AudioReactive {
class AudioReactiveBehaviour;
}
namespace VROSC::AudioReactive {
class ReactToBeat;
}
namespace VROSC::AudioReactive {
class ShiftColorData;
}
namespace VROSC::AudioReactive {
class ShiftColorEffectData;
}
namespace VROSC::AudioReactive {
class ShiftColorEffect__SpecificFlow_d__10;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ShiftColorEffect;
}
namespace VROSC::AudioReactive {
class ShiftColorEffect__SpecificFlow_d__10;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ShiftColorEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ShiftColorEffect/<SpecificFlow>d__10
class CORDL_TYPE ShiftColorEffect__SpecificFlow_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::ShiftColorEffect*  __4__this;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d5d2c, size 0x248, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d5fec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d5ff4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d602c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d5d28, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::ShiftColorEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::ShiftColorEffect*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::ShiftColorEffect*  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17d5cf8, size 0x28, virtual false, abstract: false, final false
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
constexpr ShiftColorEffect__SpecificFlow_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShiftColorEffect__SpecificFlow_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShiftColorEffect__SpecificFlow_d__10(ShiftColorEffect__SpecificFlow_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShiftColorEffect__SpecificFlow_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShiftColorEffect__SpecificFlow_d__10(ShiftColorEffect__SpecificFlow_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1508};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::ShiftColorEffect*  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10, 0x30>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.CoroutineDrivenEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ShiftColorEffect
class CORDL_TYPE ShiftColorEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
public:
// Declarations
using _SpecificFlow_d__10 = ::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData>  Data;

 __declspec(property(get=get_Renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  Renderers;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData>  _data;

/// @brief Field _renderers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderers, put=__cordl_internal_set__renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  _renderers;

/// @brief Field _shiftColorDatas, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__shiftColorDatas, put=__cordl_internal_set__shiftColorDatas)) ::ArrayW<::VROSC::AudioReactive::ShiftColorData*,::Array<::VROSC::AudioReactive::ShiftColorData*>*>  _shiftColorDatas;

/// @brief Method DrawGizmos, addr 0x17d5ba8, size 0xf0, virtual true, abstract: false, final false
inline void DrawGizmos(::VROSC::AudioReactive::ReactToBeat*  sender) ;

static inline ::VROSC::AudioReactive::ShiftColorEffect* New_ctor() ;

/// @brief Method Setup, addr 0x17d5868, size 0x12c, virtual true, abstract: false, final false
inline void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour*  behaviour) ;

/// @brief Method SpecificFlow, addr 0x17d5c98, size 0x60, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

/// @brief Method Update, addr 0x17d5a38, size 0x94, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData>& __cordl_internal_get__data() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get__renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>& __cordl_internal_get__renderers() ;

constexpr ::ArrayW<::VROSC::AudioReactive::ShiftColorData*,::Array<::VROSC::AudioReactive::ShiftColorData*>*> const& __cordl_internal_get__shiftColorDatas() const;

constexpr ::ArrayW<::VROSC::AudioReactive::ShiftColorData*,::Array<::VROSC::AudioReactive::ShiftColorData*>*>& __cordl_internal_get__shiftColorDatas() ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::ShiftColorEffectData>  value) ;

constexpr void __cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  value) ;

constexpr void __cordl_internal_set__shiftColorDatas(::ArrayW<::VROSC::AudioReactive::ShiftColorData*,::Array<::VROSC::AudioReactive::ShiftColorData*>*>  value) ;

/// @brief Method .ctor, addr 0x17d5d20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17d5858, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData> get_Data() ;

/// @brief Method get_Renderers, addr 0x17d5860, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*> get_Renderers() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShiftColorEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShiftColorEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShiftColorEffect(ShiftColorEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShiftColorEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShiftColorEffect(ShiftColorEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1509};

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::ShiftColorEffectData>  ____data;

/// @brief Field _renderers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  ____renderers;

/// @brief Field _shiftColorDatas, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::VROSC::AudioReactive::ShiftColorData*,::Array<::VROSC::AudioReactive::ShiftColorData*>*>  ____shiftColorDatas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffect, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffect, ____renderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffect, ____shiftColorDatas) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ShiftColorEffect, 0x48>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ShiftColorEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShiftColorEffect*, "VROSC.AudioReactive", "ShiftColorEffect");
NEED_NO_BOX(::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShiftColorEffect__SpecificFlow_d__10*, "VROSC.AudioReactive", "ShiftColorEffect/<SpecificFlow>d__10");
