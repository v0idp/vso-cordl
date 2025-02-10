#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/TransformLerpEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/AudioReactive/zzzz__CoroutineDrivenEffect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformLerpEffect)
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
class TransformEffectData;
}
namespace VROSC::AudioReactive {
class TransformLerpEffect__SpecificFlow_d__12;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class TransformLerpEffect;
}
namespace VROSC::AudioReactive {
class TransformLerpEffect__SpecificFlow_d__12;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::TransformLerpEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.TransformLerpEffect/<SpecificFlow>d__12
class CORDL_TYPE TransformLerpEffect__SpecificFlow_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::TransformLerpEffect*  __4__this;

/// @brief Field <fromIsTarget>5__3, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__fromIsTarget_5__3, put=__cordl_internal_set__fromIsTarget_5__3)) bool  _fromIsTarget_5__3;

/// @brief Field <startPosition>5__4, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition_5__4, put=__cordl_internal_set__startPosition_5__4)) ::UnityEngine::Vector3  _startPosition_5__4;

/// @brief Field <startRotation>5__5, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__startRotation_5__5, put=__cordl_internal_set__startRotation_5__5)) ::UnityEngine::Quaternion  _startRotation_5__5;

/// @brief Field <startScale>5__6, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__startScale_5__6, put=__cordl_internal_set__startScale_5__6)) ::UnityEngine::Vector3  _startScale_5__6;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d78f8, size 0x308, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d7c00, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d7c08, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d7c40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d78f4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::TransformLerpEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::TransformLerpEffect*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get__fromIsTarget_5__3() const;

constexpr bool& __cordl_internal_get__fromIsTarget_5__3() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition_5__4() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition_5__4() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__startRotation_5__5() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__startRotation_5__5() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale_5__6() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale_5__6() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::TransformLerpEffect*  value) ;

constexpr void __cordl_internal_set__fromIsTarget_5__3(bool  value) ;

constexpr void __cordl_internal_set__startPosition_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startRotation_5__5(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__startScale_5__6(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17d78c4, size 0x28, virtual false, abstract: false, final false
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
constexpr TransformLerpEffect__SpecificFlow_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformLerpEffect__SpecificFlow_d__12", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformLerpEffect__SpecificFlow_d__12(TransformLerpEffect__SpecificFlow_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformLerpEffect__SpecificFlow_d__12", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformLerpEffect__SpecificFlow_d__12(TransformLerpEffect__SpecificFlow_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1529};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::TransformLerpEffect*  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <fromIsTarget>5__3, offset: 0x2c, size: 0x1, def value: None
 bool  ____fromIsTarget_5__3;

/// @brief Field <startPosition>5__4, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition_5__4;

/// @brief Field <startRotation>5__5, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____startRotation_5__5;

/// @brief Field <startScale>5__6, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startScale_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12, ____fromIsTarget_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12, ____startPosition_5__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12, ____startRotation_5__5) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12, ____startScale_5__6) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12, 0x58>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.CoroutineDrivenEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.TransformLerpEffect
class CORDL_TYPE TransformLerpEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
public:
// Declarations
using _SpecificFlow_d__12 = ::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::AudioReactive::TransformEffectData>  Data;

 __declspec(property(get=get_From)) ::UnityW<::UnityEngine::Transform>  From;

 __declspec(property(get=get_Target)) ::UnityW<::UnityEngine::Transform>  Target;

 __declspec(property(get=get_To)) ::UnityW<::UnityEngine::Transform>  To;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::TransformEffectData>  _data;

/// @brief Field _from, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__from, put=__cordl_internal_set__from)) ::UnityW<::UnityEngine::Transform>  _from;

/// @brief Field _target, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Transform>  _target;

/// @brief Field _to, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__to, put=__cordl_internal_set__to)) ::UnityW<::UnityEngine::Transform>  _to;

static inline ::VROSC::AudioReactive::TransformLerpEffect* New_ctor() ;

/// @brief Method SpecificFlow, addr 0x17d7864, size 0x60, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

constexpr ::UnityW<::VROSC::AudioReactive::TransformEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::TransformEffectData>& __cordl_internal_get__data() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__from() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__from() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__target() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__to() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__to() ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::TransformEffectData>  value) ;

constexpr void __cordl_internal_set__from(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__to(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17d78ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17d7844, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioReactive::TransformEffectData> get_Data() ;

/// @brief Method get_From, addr 0x17d7854, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_From() ;

/// @brief Method get_Target, addr 0x17d784c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Target() ;

/// @brief Method get_To, addr 0x17d785c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_To() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformLerpEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformLerpEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformLerpEffect(TransformLerpEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformLerpEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformLerpEffect(TransformLerpEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1530};

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::TransformEffectData>  ____data;

/// @brief Field _target, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____target;

/// @brief Field _from, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____from;

/// @brief Field _to, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____to;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect, ____target) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect, ____from) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformLerpEffect, ____to) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::TransformLerpEffect, 0x50>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::TransformLerpEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TransformLerpEffect*, "VROSC.AudioReactive", "TransformLerpEffect");
NEED_NO_BOX(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TransformLerpEffect__SpecificFlow_d__12*, "VROSC.AudioReactive", "TransformLerpEffect/<SpecificFlow>d__12");
