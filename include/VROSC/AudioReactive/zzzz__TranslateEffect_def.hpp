#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/TranslateEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/AudioReactive/zzzz__CoroutineDrivenEffect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TranslateEffect)
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
class TranslateEffectData;
}
namespace VROSC::AudioReactive {
class TranslateEffect_TranslateData;
}
namespace VROSC::AudioReactive {
class TranslateEffect__SpecificFlow_d__6;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class TranslateEffect;
}
namespace VROSC::AudioReactive {
class TranslateEffect_TranslateData;
}
namespace VROSC::AudioReactive {
class TranslateEffect__SpecificFlow_d__6;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::TranslateEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::TranslateEffect_TranslateData);
MARK_REF_PTR_T(::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.TranslateEffect/TranslateData
class CORDL_TYPE TranslateEffect_TranslateData : public ::System::Object {
public:
// Declarations
/// @brief Field _endPosition, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get__endPosition, put=__cordl_internal_set__endPosition)) ::UnityEngine::Vector3  _endPosition;

/// @brief Field _local, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__local, put=__cordl_internal_set__local)) bool  _local;

/// @brief Field _startPosition, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition, put=__cordl_internal_set__startPosition)) ::UnityEngine::Vector3  _startPosition;

/// @brief Field _transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Method Lerp, addr 0x17d7eb0, size 0x5c, virtual false, abstract: false, final false
inline void Lerp(float_t  amount) ;

static inline ::VROSC::AudioReactive::TranslateEffect_TranslateData* New_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::TranslateEffectData*  data) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__endPosition() ;

constexpr bool const& __cordl_internal_get__local() const;

constexpr bool& __cordl_internal_get__local() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr void __cordl_internal_set__endPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__local(bool  value) ;

constexpr void __cordl_internal_set__startPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17d7e04, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::TranslateEffectData*  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TranslateEffect_TranslateData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TranslateEffect_TranslateData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TranslateEffect_TranslateData(TranslateEffect_TranslateData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TranslateEffect_TranslateData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TranslateEffect_TranslateData(TranslateEffect_TranslateData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1531};

/// @brief Field _transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// @brief Field _startPosition, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition;

/// @brief Field _endPosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____endPosition;

/// @brief Field _local, offset: 0x30, size: 0x1, def value: None
 bool  ____local;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect_TranslateData, ____transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect_TranslateData, ____startPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect_TranslateData, ____endPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect_TranslateData, ____local) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::TranslateEffect_TranslateData, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.TranslateEffect/<SpecificFlow>d__6
class CORDL_TYPE TranslateEffect__SpecificFlow_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::TranslateEffect*  __4__this;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field <translateDatas>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__translateDatas_5__3, put=__cordl_internal_set__translateDatas_5__3)) ::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*>  _translateDatas_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d7f10, size 0x15c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d806c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d8074, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d80ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d7f0c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::TranslateEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::TranslateEffect*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr ::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*> const& __cordl_internal_get__translateDatas_5__3() const;

constexpr ::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*>& __cordl_internal_get__translateDatas_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::TranslateEffect*  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set__translateDatas_5__3(::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*>  value) ;

/// @brief Method .ctor, addr 0x17d7cb8, size 0x28, virtual false, abstract: false, final false
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
constexpr TranslateEffect__SpecificFlow_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TranslateEffect__SpecificFlow_d__6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TranslateEffect__SpecificFlow_d__6(TranslateEffect__SpecificFlow_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TranslateEffect__SpecificFlow_d__6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TranslateEffect__SpecificFlow_d__6(TranslateEffect__SpecificFlow_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1532};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::TranslateEffect*  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <translateDatas>5__3, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*>  ____translateDatas_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6, ____translateDatas_5__3) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.CoroutineDrivenEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.TranslateEffect
class CORDL_TYPE TranslateEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
public:
// Declarations
using TranslateData = ::VROSC::AudioReactive::TranslateEffect_TranslateData;

using _SpecificFlow_d__6 = ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::AudioReactive::TranslateEffectData>  Data;

 __declspec(property(get=get_Transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  Transforms;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::TranslateEffectData>  _data;

/// @brief Field _transforms, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transforms, put=__cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  _transforms;

/// @brief Method GetTranslationDatas, addr 0x17d7ce0, size 0x124, virtual false, abstract: false, final false
inline ::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*> GetTranslationDatas() ;

static inline ::VROSC::AudioReactive::TranslateEffect* New_ctor() ;

/// @brief Method SpecificFlow, addr 0x17d7c58, size 0x60, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

constexpr ::UnityW<::VROSC::AudioReactive::TranslateEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::TranslateEffectData>& __cordl_internal_get__data() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transforms() ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::TranslateEffectData>  value) ;

constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  value) ;

/// @brief Method .ctor, addr 0x17d7ea8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17d7c48, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioReactive::TranslateEffectData> get_Data() ;

/// @brief Method get_Transforms, addr 0x17d7c50, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> get_Transforms() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TranslateEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TranslateEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TranslateEffect(TranslateEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TranslateEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TranslateEffect(TranslateEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1533};

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::TranslateEffectData>  ____data;

/// @brief Field _transforms, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  ____transforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TranslateEffect, ____transforms) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::TranslateEffect, 0x40>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::TranslateEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TranslateEffect*, "VROSC.AudioReactive", "TranslateEffect");
NEED_NO_BOX(::VROSC::AudioReactive::TranslateEffect_TranslateData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TranslateEffect_TranslateData*, "VROSC.AudioReactive", "TranslateEffect/TranslateData");
NEED_NO_BOX(::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*, "VROSC.AudioReactive", "TranslateEffect/<SpecificFlow>d__6");
