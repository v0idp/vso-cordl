#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/EmitParticlesEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/AudioReactive/zzzz__CoroutineDrivenEffect_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EmitParticlesEffect)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace VROSC::AudioReactive {
class EmitParticlesEffectData;
}
namespace VROSC::AudioReactive {
class EmitParticlesEffect__SpecificFlow_d__6;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class EmitParticlesEffect;
}
namespace VROSC::AudioReactive {
class EmitParticlesEffect__SpecificFlow_d__6;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::EmitParticlesEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::EmitParticlesEffect__SpecificFlow_d__6);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.EmitParticlesEffect/<SpecificFlow>d__6
class CORDL_TYPE EmitParticlesEffect__SpecificFlow_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::EmitParticlesEffect*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d6184, size 0xc8, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::EmitParticlesEffect__SpecificFlow_d__6* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d624c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d6254, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d628c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d6180, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::EmitParticlesEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::EmitParticlesEffect*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::EmitParticlesEffect*  value) ;

/// @brief Method .ctor, addr 0x17d6150, size 0x28, virtual false, abstract: false, final false
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
constexpr EmitParticlesEffect__SpecificFlow_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmitParticlesEffect__SpecificFlow_d__6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmitParticlesEffect__SpecificFlow_d__6(EmitParticlesEffect__SpecificFlow_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmitParticlesEffect__SpecificFlow_d__6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmitParticlesEffect__SpecificFlow_d__6(EmitParticlesEffect__SpecificFlow_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1512};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::EmitParticlesEffect*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::EmitParticlesEffect__SpecificFlow_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::EmitParticlesEffect__SpecificFlow_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::EmitParticlesEffect__SpecificFlow_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::EmitParticlesEffect__SpecificFlow_d__6, 0x28>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.CoroutineDrivenEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.EmitParticlesEffect
class CORDL_TYPE EmitParticlesEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
public:
// Declarations
using _SpecificFlow_d__6 = ::VROSC::AudioReactive::EmitParticlesEffect__SpecificFlow_d__6;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::AudioReactive::EmitParticlesEffectData>  Data;

 __declspec(property(get=get_ParticleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>,::Array<::UnityW<::UnityEngine::ParticleSystem>>*>  ParticleSystems;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::EmitParticlesEffectData>  _data;

/// @brief Field _particleSystems, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleSystems, put=__cordl_internal_set__particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>,::Array<::UnityW<::UnityEngine::ParticleSystem>>*>  _particleSystems;

static inline ::VROSC::AudioReactive::EmitParticlesEffect* New_ctor() ;

/// @brief Method SpecificFlow, addr 0x17d60f0, size 0x60, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

constexpr ::UnityW<::VROSC::AudioReactive::EmitParticlesEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::EmitParticlesEffectData>& __cordl_internal_get__data() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>,::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const& __cordl_internal_get__particleSystems() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>,::Array<::UnityW<::UnityEngine::ParticleSystem>>*>& __cordl_internal_get__particleSystems() ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::EmitParticlesEffectData>  value) ;

constexpr void __cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>,::Array<::UnityW<::UnityEngine::ParticleSystem>>*>  value) ;

/// @brief Method .ctor, addr 0x17d6178, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17d60e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioReactive::EmitParticlesEffectData> get_Data() ;

/// @brief Method get_ParticleSystems, addr 0x17d60e8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>,::Array<::UnityW<::UnityEngine::ParticleSystem>>*> get_ParticleSystems() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmitParticlesEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmitParticlesEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmitParticlesEffect(EmitParticlesEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmitParticlesEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmitParticlesEffect(EmitParticlesEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1513};

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::EmitParticlesEffectData>  ____data;

/// @brief Field _particleSystems, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>,::Array<::UnityW<::UnityEngine::ParticleSystem>>*>  ____particleSystems;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::EmitParticlesEffect, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::EmitParticlesEffect, ____particleSystems) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::EmitParticlesEffect, 0x40>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::EmitParticlesEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::EmitParticlesEffect*, "VROSC.AudioReactive", "EmitParticlesEffect");
NEED_NO_BOX(::VROSC::AudioReactive::EmitParticlesEffect__SpecificFlow_d__6);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::EmitParticlesEffect__SpecificFlow_d__6*, "VROSC.AudioReactive", "EmitParticlesEffect/<SpecificFlow>d__6");
