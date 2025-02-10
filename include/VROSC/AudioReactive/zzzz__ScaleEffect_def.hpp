#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ScaleEffect.hpp"
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
CORDL_MODULE_EXPORT(ScaleEffect)
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
class ReactToBeat;
}
namespace VROSC::AudioReactive {
class ScaleEffectData;
}
namespace VROSC::AudioReactive {
class ScaleEffect_ScaleData;
}
namespace VROSC::AudioReactive {
class ScaleEffect__SpecificFlow_d__8;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ScaleEffect;
}
namespace VROSC::AudioReactive {
class ScaleEffect_ScaleData;
}
namespace VROSC::AudioReactive {
class ScaleEffect__SpecificFlow_d__8;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ScaleEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::ScaleEffect_ScaleData);
MARK_REF_PTR_T(::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ScaleEffect/ScaleData
class CORDL_TYPE ScaleEffect_ScaleData : public ::System::Object {
public:
// Declarations
/// @brief Field _endScale, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__endScale, put=__cordl_internal_set__endScale)) ::UnityEngine::Vector3  _endScale;

/// @brief Field _initialScale, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialScale, put=__cordl_internal_set__initialScale)) ::UnityEngine::Vector3  _initialScale;

/// @brief Field _startScale, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get__startScale, put=__cordl_internal_set__startScale)) ::UnityEngine::Vector3  _startScale;

/// @brief Field _transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Method Lerp, addr 0x17d7074, size 0x4c, virtual false, abstract: false, final false
inline void Lerp(float_t  amount) ;

static inline ::VROSC::AudioReactive::ScaleEffect_ScaleData* New_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::ScaleEffectData*  data) ;

/// @brief Method SetStartScale, addr 0x17d6ecc, size 0x6c, virtual false, abstract: false, final false
inline void SetStartScale(::VROSC::AudioReactive::ScaleEffectData*  data) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__endScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr void __cordl_internal_set__endScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__initialScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17d6f38, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::ScaleEffectData*  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleEffect_ScaleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleEffect_ScaleData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleEffect_ScaleData(ScaleEffect_ScaleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleEffect_ScaleData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleEffect_ScaleData(ScaleEffect_ScaleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1522};

/// @brief Field _transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// @brief Field _startScale, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startScale;

/// @brief Field _initialScale, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialScale;

/// @brief Field _endScale, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____endScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect_ScaleData, ____transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect_ScaleData, ____startScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect_ScaleData, ____initialScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect_ScaleData, ____endScale) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ScaleEffect_ScaleData, 0x40>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ScaleEffect/<SpecificFlow>d__8
class CORDL_TYPE ScaleEffect__SpecificFlow_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::ScaleEffect*  __4__this;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d70c4, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d721c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d7224, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d725c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d70c0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::ScaleEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::ScaleEffect*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::ScaleEffect*  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17d6e38, size 0x28, virtual false, abstract: false, final false
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
constexpr ScaleEffect__SpecificFlow_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleEffect__SpecificFlow_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleEffect__SpecificFlow_d__8(ScaleEffect__SpecificFlow_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleEffect__SpecificFlow_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleEffect__SpecificFlow_d__8(ScaleEffect__SpecificFlow_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1523};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::ScaleEffect*  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8, 0x30>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.CoroutineDrivenEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ScaleEffect
class CORDL_TYPE ScaleEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
public:
// Declarations
using ScaleData = ::VROSC::AudioReactive::ScaleEffect_ScaleData;

using _SpecificFlow_d__8 = ::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::AudioReactive::ScaleEffectData>  Data;

 __declspec(property(get=get_Transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  Transforms;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::ScaleEffectData>  _data;

/// @brief Field _scaleDatas, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleDatas, put=__cordl_internal_set__scaleDatas)) ::ArrayW<::VROSC::AudioReactive::ScaleEffect_ScaleData*,::Array<::VROSC::AudioReactive::ScaleEffect_ScaleData*>*>  _scaleDatas;

/// @brief Field _transforms, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transforms, put=__cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  _transforms;

/// @brief Method DrawGizmos, addr 0x17d6f7c, size 0xf0, virtual true, abstract: false, final false
inline void DrawGizmos(::VROSC::AudioReactive::ReactToBeat*  sender) ;

/// @brief Method GetScaleDatas, addr 0x17d6cd0, size 0x108, virtual false, abstract: false, final false
inline void GetScaleDatas() ;

static inline ::VROSC::AudioReactive::ScaleEffect* New_ctor() ;

/// @brief Method SetStartScale, addr 0x17d6e60, size 0x6c, virtual false, abstract: false, final false
inline void SetStartScale() ;

/// @brief Method Setup, addr 0x17d6cb8, size 0x18, virtual true, abstract: false, final false
inline void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour*  behaviour) ;

/// @brief Method SpecificFlow, addr 0x17d6dd8, size 0x60, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

constexpr ::UnityW<::VROSC::AudioReactive::ScaleEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::ScaleEffectData>& __cordl_internal_get__data() ;

constexpr ::ArrayW<::VROSC::AudioReactive::ScaleEffect_ScaleData*,::Array<::VROSC::AudioReactive::ScaleEffect_ScaleData*>*> const& __cordl_internal_get__scaleDatas() const;

constexpr ::ArrayW<::VROSC::AudioReactive::ScaleEffect_ScaleData*,::Array<::VROSC::AudioReactive::ScaleEffect_ScaleData*>*>& __cordl_internal_get__scaleDatas() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transforms() ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::ScaleEffectData>  value) ;

constexpr void __cordl_internal_set__scaleDatas(::ArrayW<::VROSC::AudioReactive::ScaleEffect_ScaleData*,::Array<::VROSC::AudioReactive::ScaleEffect_ScaleData*>*>  value) ;

constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  value) ;

/// @brief Method .ctor, addr 0x17d706c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17d6ca8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioReactive::ScaleEffectData> get_Data() ;

/// @brief Method get_Transforms, addr 0x17d6cb0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> get_Transforms() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleEffect(ScaleEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleEffect(ScaleEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1524};

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::ScaleEffectData>  ____data;

/// @brief Field _transforms, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  ____transforms;

/// @brief Field _scaleDatas, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::VROSC::AudioReactive::ScaleEffect_ScaleData*,::Array<::VROSC::AudioReactive::ScaleEffect_ScaleData*>*>  ____scaleDatas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect, ____transforms) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffect, ____scaleDatas) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ScaleEffect, 0x48>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ScaleEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ScaleEffect*, "VROSC.AudioReactive", "ScaleEffect");
NEED_NO_BOX(::VROSC::AudioReactive::ScaleEffect_ScaleData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ScaleEffect_ScaleData*, "VROSC.AudioReactive", "ScaleEffect/ScaleData");
NEED_NO_BOX(::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ScaleEffect__SpecificFlow_d__8*, "VROSC.AudioReactive", "ScaleEffect/<SpecificFlow>d__8");
