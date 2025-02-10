#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteParticles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteBoardNoteParticles)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class NoteBoardNoteAnimator;
}
namespace VROSC {
class NoteBoardNoteParticles_Emission;
}
// Forward declare root types
namespace VROSC {
class NoteBoardNoteParticles;
}
namespace VROSC {
class NoteBoardNoteParticles_Emission;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardNoteParticles);
MARK_REF_PTR_T(::VROSC::NoteBoardNoteParticles_Emission);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteParticles/Emission
class CORDL_TYPE NoteBoardNoteParticles_Emission : public ::System::Object {
public:
// Declarations
/// @brief Field _coolDown, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__coolDown, put=__cordl_internal_set__coolDown)) float_t  _coolDown;

/// @brief Field _emitter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__emitter, put=__cordl_internal_set__emitter)) ::UnityW<::UnityEngine::Transform>  _emitter;

/// @brief Field _particleSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleSystem, put=__cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  _particleSystem;

/// @brief Field _rate, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__rate, put=__cordl_internal_set__rate)) float_t  _rate;

/// @brief Field _size, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) float_t  _size;

static inline ::VROSC::NoteBoardNoteParticles_Emission* New_ctor(::UnityEngine::ParticleSystem*  particleSystem, float_t  rate, float_t  size, ::UnityEngine::Transform*  emitter) ;

/// @brief Method Update, addr 0x17b1908, size 0x168, virtual false, abstract: false, final false
inline void Update(int32_t  multiplier, ::UnityEngine::Color  color) ;

constexpr float_t const& __cordl_internal_get__coolDown() const;

constexpr float_t& __cordl_internal_get__coolDown() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__emitter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__emitter() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem() ;

constexpr float_t const& __cordl_internal_get__rate() const;

constexpr float_t& __cordl_internal_get__rate() ;

constexpr float_t const& __cordl_internal_get__size() const;

constexpr float_t& __cordl_internal_get__size() ;

constexpr void __cordl_internal_set__coolDown(float_t  value) ;

constexpr void __cordl_internal_set__emitter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__rate(float_t  value) ;

constexpr void __cordl_internal_set__size(float_t  value) ;

/// @brief Method .ctor, addr 0x17b1720, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem, float_t  rate, float_t  size, ::UnityEngine::Transform*  emitter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteParticles_Emission() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteParticles_Emission", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteParticles_Emission(NoteBoardNoteParticles_Emission && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteParticles_Emission", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteParticles_Emission(NoteBoardNoteParticles_Emission const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1438};

/// @brief Field _rate, offset: 0x10, size: 0x4, def value: None
 float_t  ____rate;

/// @brief Field _size, offset: 0x14, size: 0x4, def value: None
 float_t  ____size;

/// @brief Field _coolDown, offset: 0x18, size: 0x4, def value: None
 float_t  ____coolDown;

/// @brief Field _particleSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____particleSystem;

/// @brief Field _emitter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____emitter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteParticles_Emission, ____rate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles_Emission, ____size) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles_Emission, ____coolDown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles_Emission, ____particleSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles_Emission, ____emitter) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteParticles_Emission, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteParticles
class CORDL_TYPE NoteBoardNoteParticles : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Emission = ::VROSC::NoteBoardNoteParticles_Emission;

/// @brief Field _multiplier, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__multiplier, put=__cordl_internal_set__multiplier)) int32_t  _multiplier;

/// @brief Field _particleSystem, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleSystem, put=__cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  _particleSystem;

/// @brief Field _randomColor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__randomColor, put=__cordl_internal_set__randomColor)) ::UnityEngine::Gradient*  _randomColor;

/// @brief Field _rate, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__rate, put=__cordl_internal_set__rate)) float_t  _rate;

/// @brief Field _red, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__red, put=__cordl_internal_set__red)) ::VROSC::NoteBoardNoteParticles_Emission*  _red;

/// @brief Field _remap, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__remap, put=__cordl_internal_set__remap)) bool  _remap;

/// @brief Field _remapB, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get__remapB, put=__cordl_internal_set__remapB)) ::UnityEngine::Color  _remapB;

/// @brief Field _remapG, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get__remapG, put=__cordl_internal_set__remapG)) ::UnityEngine::Color  _remapG;

/// @brief Field _remapR, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get__remapR, put=__cordl_internal_set__remapR)) ::UnityEngine::Color  _remapR;

/// @brief Field _size, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) float_t  _size;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::NoteBoardNoteAnimator>  _target;

/// @brief Field _useRandomColor, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__useRandomColor, put=__cordl_internal_set__useRandomColor)) bool  _useRandomColor;

/// @brief Method Awake, addr 0x17b15d8, size 0x148, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetColor, addr 0x17b1888, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(::UnityEngine::Color  normalColor) ;

static inline ::VROSC::NoteBoardNoteParticles* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17b1a70, size 0x4c, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Update, addr 0x17b1764, size 0x124, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__multiplier() const;

constexpr int32_t& __cordl_internal_get__multiplier() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__randomColor() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__randomColor() ;

constexpr float_t const& __cordl_internal_get__rate() const;

constexpr float_t& __cordl_internal_get__rate() ;

constexpr ::VROSC::NoteBoardNoteParticles_Emission* const& __cordl_internal_get__red() const;

constexpr ::VROSC::NoteBoardNoteParticles_Emission*& __cordl_internal_get__red() ;

constexpr bool const& __cordl_internal_get__remap() const;

constexpr bool& __cordl_internal_get__remap() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__remapB() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__remapB() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__remapG() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__remapG() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__remapR() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__remapR() ;

constexpr float_t const& __cordl_internal_get__size() const;

constexpr float_t& __cordl_internal_get__size() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteAnimator> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteAnimator>& __cordl_internal_get__target() ;

constexpr bool const& __cordl_internal_get__useRandomColor() const;

constexpr bool& __cordl_internal_get__useRandomColor() ;

constexpr void __cordl_internal_set__multiplier(int32_t  value) ;

constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__randomColor(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__rate(float_t  value) ;

constexpr void __cordl_internal_set__red(::VROSC::NoteBoardNoteParticles_Emission*  value) ;

constexpr void __cordl_internal_set__remap(bool  value) ;

constexpr void __cordl_internal_set__remapB(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__remapG(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__remapR(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__size(float_t  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::NoteBoardNoteAnimator>  value) ;

constexpr void __cordl_internal_set__useRandomColor(bool  value) ;

/// @brief Method .ctor, addr 0x17b1abc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteParticles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteParticles", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteParticles(NoteBoardNoteParticles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteParticles", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteParticles(NoteBoardNoteParticles const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1439};

/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteAnimator>  ____target;

/// @brief Field _rate, offset: 0x28, size: 0x4, def value: None
 float_t  ____rate;

/// @brief Field _size, offset: 0x2c, size: 0x4, def value: None
 float_t  ____size;

/// @brief Field _multiplier, offset: 0x30, size: 0x4, def value: None
 int32_t  ____multiplier;

/// @brief Field _useRandomColor, offset: 0x34, size: 0x1, def value: None
 bool  ____useRandomColor;

/// @brief Field _randomColor, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____randomColor;

/// @brief Field _remap, offset: 0x40, size: 0x1, def value: None
 bool  ____remap;

/// @brief Field _remapR, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Color  ____remapR;

/// @brief Field _remapG, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ____remapG;

/// @brief Field _remapB, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Color  ____remapB;

/// @brief Field _red, offset: 0x78, size: 0x8, def value: None
 ::VROSC::NoteBoardNoteParticles_Emission*  ____red;

/// @brief Field _particleSystem, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____particleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____rate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____size) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____multiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____useRandomColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____randomColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____remap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____remapR) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____remapG) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____remapB) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____red) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteParticles, ____particleSystem) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteParticles, 0x88>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardNoteParticles);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteParticles*, "VROSC", "NoteBoardNoteParticles");
NEED_NO_BOX(::VROSC::NoteBoardNoteParticles_Emission);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteParticles_Emission*, "VROSC", "NoteBoardNoteParticles/Emission");
