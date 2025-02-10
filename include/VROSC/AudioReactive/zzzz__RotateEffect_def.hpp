#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/RotateEffect.hpp"
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
CORDL_MODULE_EXPORT(RotateEffect)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC::AudioReactive {
class AudioReactiveBehaviour;
}
namespace VROSC::AudioReactive {
class ConstantRotationData;
}
namespace VROSC::AudioReactive {
class ReactToBeat;
}
namespace VROSC::AudioReactive {
class RotateEffectData;
}
namespace VROSC::AudioReactive {
class RotateEffect__SpecificFlow_d__10;
}
namespace VROSC::AudioReactive {
class TriggerRotationData;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class RotateEffect;
}
namespace VROSC::AudioReactive {
class RotateEffect__SpecificFlow_d__10;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::RotateEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.RotateEffect/<SpecificFlow>d__10
class CORDL_TYPE RotateEffect__SpecificFlow_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::RotateEffect*  __4__this;

/// @brief Field <datas>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__datas_5__3, put=__cordl_internal_set__datas_5__3)) ::ArrayW<::VROSC::AudioReactive::TriggerRotationData*,::Array<::VROSC::AudioReactive::TriggerRotationData*>*>  _datas_5__3;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d6a98, size 0x118, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d6c18, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d6c20, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d6c58, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d6a94, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::RotateEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::RotateEffect*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::VROSC::AudioReactive::TriggerRotationData*,::Array<::VROSC::AudioReactive::TriggerRotationData*>*> const& __cordl_internal_get__datas_5__3() const;

constexpr ::ArrayW<::VROSC::AudioReactive::TriggerRotationData*,::Array<::VROSC::AudioReactive::TriggerRotationData*>*>& __cordl_internal_get__datas_5__3() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::RotateEffect*  value) ;

constexpr void __cordl_internal_set__datas_5__3(::ArrayW<::VROSC::AudioReactive::TriggerRotationData*,::Array<::VROSC::AudioReactive::TriggerRotationData*>*>  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17d6824, size 0x28, virtual false, abstract: false, final false
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
constexpr RotateEffect__SpecificFlow_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotateEffect__SpecificFlow_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RotateEffect__SpecificFlow_d__10(RotateEffect__SpecificFlow_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotateEffect__SpecificFlow_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotateEffect__SpecificFlow_d__10(RotateEffect__SpecificFlow_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1517};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::RotateEffect*  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <datas>5__3, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::VROSC::AudioReactive::TriggerRotationData*,::Array<::VROSC::AudioReactive::TriggerRotationData*>*>  ____datas_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10, ____datas_5__3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.CoroutineDrivenEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.RotateEffect
class CORDL_TYPE RotateEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
public:
// Declarations
using _SpecificFlow_d__10 = ::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::AudioReactive::RotateEffectData>  Data;

 __declspec(property(get=get_Transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  Transforms;

/// @brief Field _constantRotationData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__constantRotationData, put=__cordl_internal_set__constantRotationData)) ::ArrayW<::VROSC::AudioReactive::ConstantRotationData*,::Array<::VROSC::AudioReactive::ConstantRotationData*>*>  _constantRotationData;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::RotateEffectData>  _data;

/// @brief Field _transforms, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transforms, put=__cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  _transforms;

/// @brief Method DrawGizmos, addr 0x17d66d4, size 0xf0, virtual true, abstract: false, final false
inline void DrawGizmos(::VROSC::AudioReactive::ReactToBeat*  sender) ;

/// @brief Method GetRotationDatas, addr 0x17d684c, size 0x124, virtual false, abstract: false, final false
inline ::ArrayW<::VROSC::AudioReactive::TriggerRotationData*,::Array<::VROSC::AudioReactive::TriggerRotationData*>*> GetRotationDatas() ;

static inline ::VROSC::AudioReactive::RotateEffect* New_ctor() ;

/// @brief Method Setup, addr 0x17d6478, size 0x13c, virtual true, abstract: false, final false
inline void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour*  behaviour) ;

/// @brief Method SpecificFlow, addr 0x17d67c4, size 0x60, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

/// @brief Method Update, addr 0x17d660c, size 0x6c, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::VROSC::AudioReactive::ConstantRotationData*,::Array<::VROSC::AudioReactive::ConstantRotationData*>*> const& __cordl_internal_get__constantRotationData() const;

constexpr ::ArrayW<::VROSC::AudioReactive::ConstantRotationData*,::Array<::VROSC::AudioReactive::ConstantRotationData*>*>& __cordl_internal_get__constantRotationData() ;

constexpr ::UnityW<::VROSC::AudioReactive::RotateEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::RotateEffectData>& __cordl_internal_get__data() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transforms() ;

constexpr void __cordl_internal_set__constantRotationData(::ArrayW<::VROSC::AudioReactive::ConstantRotationData*,::Array<::VROSC::AudioReactive::ConstantRotationData*>*>  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::RotateEffectData>  value) ;

constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  value) ;

/// @brief Method .ctor, addr 0x17d6a8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17d6468, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioReactive::RotateEffectData> get_Data() ;

/// @brief Method get_Transforms, addr 0x17d6470, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> get_Transforms() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotateEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotateEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RotateEffect(RotateEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotateEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotateEffect(RotateEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1518};

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::RotateEffectData>  ____data;

/// @brief Field _transforms, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  ____transforms;

/// @brief Field _constantRotationData, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::VROSC::AudioReactive::ConstantRotationData*,::Array<::VROSC::AudioReactive::ConstantRotationData*>*>  ____constantRotationData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::RotateEffect, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffect, ____transforms) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffect, ____constantRotationData) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::RotateEffect, 0x48>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::RotateEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::RotateEffect*, "VROSC.AudioReactive", "RotateEffect");
NEED_NO_BOX(::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::RotateEffect__SpecificFlow_d__10*, "VROSC.AudioReactive", "RotateEffect/<SpecificFlow>d__10");
