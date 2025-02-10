#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ShaderEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/AudioReactive/zzzz__CoroutineDrivenEffect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderEffect)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC::AudioReactive {
class AudioReactiveBehaviour;
}
namespace VROSC::AudioReactive {
class ShaderEffectData;
}
namespace VROSC::AudioReactive {
class ShaderEffect__SpecificFlow_d__9;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ShaderEffect;
}
namespace VROSC::AudioReactive {
class ShaderEffect__SpecificFlow_d__9;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ShaderEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ShaderEffect/<SpecificFlow>d__9
class CORDL_TYPE ShaderEffect__SpecificFlow_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::ShaderEffect*  __4__this;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d74e0, size 0x10c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d75ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d75f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d762c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d74dc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::ShaderEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::ShaderEffect*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::ShaderEffect*  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17d73f8, size 0x28, virtual false, abstract: false, final false
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
constexpr ShaderEffect__SpecificFlow_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderEffect__SpecificFlow_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderEffect__SpecificFlow_d__9(ShaderEffect__SpecificFlow_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderEffect__SpecificFlow_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderEffect__SpecificFlow_d__9(ShaderEffect__SpecificFlow_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1525};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::ShaderEffect*  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9, 0x30>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies UnityEngine.Color, VROSC.AudioReactive.CoroutineDrivenEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ShaderEffect
class CORDL_TYPE ShaderEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
public:
// Declarations
using _SpecificFlow_d__9 = ::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::AudioReactive::ShaderEffectData>  Data;

 __declspec(property(get=get_Renderer)) ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  Renderer;

/// @brief Field _currentColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentColor, put=__cordl_internal_set__currentColor)) ::UnityEngine::Color  _currentColor;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::ShaderEffectData>  _data;

/// @brief Field _materialBlocks, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialBlocks, put=__cordl_internal_set__materialBlocks)) ::ArrayW<::UnityEngine::MaterialPropertyBlock*,::Array<::UnityEngine::MaterialPropertyBlock*>*>  _materialBlocks;

/// @brief Field _renderers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderers, put=__cordl_internal_set__renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  _renderers;

static inline ::VROSC::AudioReactive::ShaderEffect* New_ctor() ;

/// @brief Method SetShaderEffects, addr 0x17d7420, size 0x8c, virtual false, abstract: false, final false
inline void SetShaderEffects(::UnityEngine::Renderer*  renderer, ::UnityEngine::MaterialPropertyBlock*  block, float_t  value) ;

/// @brief Method Setup, addr 0x17d7274, size 0x124, virtual true, abstract: false, final false
inline void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour*  behaviour) ;

/// @brief Method SpecificFlow, addr 0x17d7398, size 0x60, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentColor() ;

constexpr ::UnityW<::VROSC::AudioReactive::ShaderEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::ShaderEffectData>& __cordl_internal_get__data() ;

constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*,::Array<::UnityEngine::MaterialPropertyBlock*>*> const& __cordl_internal_get__materialBlocks() const;

constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*,::Array<::UnityEngine::MaterialPropertyBlock*>*>& __cordl_internal_get__materialBlocks() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get__renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>& __cordl_internal_get__renderers() ;

constexpr void __cordl_internal_set__currentColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::ShaderEffectData>  value) ;

constexpr void __cordl_internal_set__materialBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*,::Array<::UnityEngine::MaterialPropertyBlock*>*>  value) ;

constexpr void __cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  value) ;

/// @brief Method .ctor, addr 0x17d74d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17d7264, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioReactive::ShaderEffectData> get_Data() ;

/// @brief Method get_Renderer, addr 0x17d726c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*> get_Renderer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderEffect(ShaderEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderEffect(ShaderEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1526};

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::ShaderEffectData>  ____data;

/// @brief Field _renderers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  ____renderers;

/// @brief Field _materialBlocks, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::MaterialPropertyBlock*,::Array<::UnityEngine::MaterialPropertyBlock*>*>  ____materialBlocks;

/// @brief Field _currentColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ShaderEffect, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffect, ____renderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffect, ____materialBlocks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffect, ____currentColor) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ShaderEffect, 0x58>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ShaderEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShaderEffect*, "VROSC.AudioReactive", "ShaderEffect");
NEED_NO_BOX(::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShaderEffect__SpecificFlow_d__9*, "VROSC.AudioReactive", "ShaderEffect/<SpecificFlow>d__9");
