#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct ParticleSystemStopBehavior;
}
namespace UnityEngine {
struct ParticleSystem_EmitParams;
}
namespace UnityEngine {
struct ParticleSystem_MainModule;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxGradient;
}
namespace UnityEngine {
struct ParticleSystem_Particle;
}
namespace UnityEngine {
struct ParticleSystem_SubEmittersModule;
}
namespace UnityEngine {
struct ParticleSystem_TrailModule;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct ParticleSystem_EmitParams;
}
namespace UnityEngine {
struct ParticleSystem_MainModule;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxGradient;
}
namespace UnityEngine {
struct ParticleSystem_Particle;
}
namespace UnityEngine {
struct ParticleSystem_SubEmittersModule;
}
namespace UnityEngine {
struct ParticleSystem_TrailModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystem);
MARK_VAL_T(::UnityEngine::ParticleSystem_EmitParams);
MARK_VAL_T(::UnityEngine::ParticleSystem_MainModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_MinMaxGradient);
MARK_VAL_T(::UnityEngine::ParticleSystem_Particle);
MARK_VAL_T(::UnityEngine::ParticleSystem_SubEmittersModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_TrailModule);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MainModule
struct CORDL_TYPE ParticleSystem_MainModule {
public:
// Declarations
 __declspec(property(get=get_duration)) float_t  duration;

 __declspec(property(get=get_loop)) bool  loop;

 __declspec(property(put=set_simulationSpeed)) float_t  simulationSpeed;

 __declspec(property(put=set_startColor)) ::UnityEngine::ParticleSystem_MinMaxGradient  startColor;

/// @brief Method .ctor, addr 0x2fc042c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_duration, addr 0x2fc0454, size 0x3c, virtual false, abstract: false, final false
inline float_t get_duration() ;

/// @brief Method get_duration_Injected, addr 0x2fc0490, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_duration_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule>  _unity_self) ;

/// @brief Method get_loop, addr 0x2fc04cc, size 0x3c, virtual false, abstract: false, final false
inline bool get_loop() ;

/// @brief Method get_loop_Injected, addr 0x2fc0508, size 0x3c, virtual false, abstract: false, final false
static inline bool get_loop_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule>  _unity_self) ;

/// @brief Method set_simulationSpeed, addr 0x2fc05cc, size 0x4c, virtual false, abstract: false, final false
inline void set_simulationSpeed(float_t  value) ;

/// @brief Method set_simulationSpeed_Injected, addr 0x2fc0618, size 0x4c, virtual false, abstract: false, final false
static inline void set_simulationSpeed_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule>  _unity_self, float_t  value) ;

/// @brief Method set_startColor, addr 0x2fc0544, size 0x44, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::ParticleSystem_MinMaxGradient  value) ;

/// @brief Method set_startColor_Injected, addr 0x2fc0588, size 0x44, virtual false, abstract: false, final false
static inline void set_startColor_Injected(::ByRef<::UnityEngine::ParticleSystem_MainModule>  _unity_self, ::ByRef<::UnityEngine::ParticleSystem_MinMaxGradient>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MainModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
constexpr ParticleSystem_MainModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12319};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MainModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_MainModule, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/SubEmittersModule
struct CORDL_TYPE ParticleSystem_SubEmittersModule {
public:
// Declarations
 __declspec(property(get=get_subEmittersCount)) int32_t  subEmittersCount;

/// @brief Method GetSubEmitterSystem, addr 0x2fc06dc, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ParticleSystem> GetSubEmitterSystem(int32_t  index) ;

/// @brief Method GetSubEmitterSystem_Injected, addr 0x2fc0720, size 0x44, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ParticleSystem> GetSubEmitterSystem_Injected(::ByRef<::UnityEngine::ParticleSystem_SubEmittersModule>  _unity_self, int32_t  index) ;

/// @brief Method .ctor, addr 0x2fc0438, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_subEmittersCount, addr 0x2fc0664, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_subEmittersCount() ;

/// @brief Method get_subEmittersCount_Injected, addr 0x2fc06a0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_subEmittersCount_Injected(::ByRef<::UnityEngine::ParticleSystem_SubEmittersModule>  _unity_self) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_SubEmittersModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
constexpr ParticleSystem_SubEmittersModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_SubEmittersModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_SubEmittersModule, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Color32, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/Particle
struct CORDL_TYPE ParticleSystem_Particle {
public:
// Declarations
 __declspec(property(put=set_angularVelocity3D)) ::UnityEngine::Vector3  angularVelocity3D;

 __declspec(property(put=set_lifetime)) float_t  lifetime;

 __declspec(property(put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(put=set_randomSeed)) uint32_t  randomSeed;

 __declspec(property(put=set_remainingLifetime)) float_t  remainingLifetime;

 __declspec(property(put=set_rotation3D)) ::UnityEngine::Vector3  rotation3D;

 __declspec(property(put=set_startColor)) ::UnityEngine::Color32  startColor;

 __declspec(property(put=set_startLifetime)) float_t  startLifetime;

 __declspec(property(put=set_startSize)) float_t  startSize;

 __declspec(property(put=set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method set_angularVelocity3D, addr 0x2fc0074, size 0x2c, virtual false, abstract: false, final false
inline void set_angularVelocity3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_lifetime, addr 0x2fc002c, size 0x8, virtual false, abstract: false, final false
inline void set_lifetime(float_t  value) ;

/// @brief Method set_position, addr 0x2fc0014, size 0xc, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_randomSeed, addr 0x2fc00a8, size 0x8, virtual false, abstract: false, final false
inline void set_randomSeed(uint32_t  value) ;

/// @brief Method set_remainingLifetime, addr 0x2fc0764, size 0x8, virtual false, abstract: false, final false
inline void set_remainingLifetime(float_t  value) ;

/// @brief Method set_rotation3D, addr 0x2fc0048, size 0x2c, virtual false, abstract: false, final false
inline void set_rotation3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_startColor, addr 0x2fc00a0, size 0x8, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color32  value) ;

/// @brief Method set_startLifetime, addr 0x2fc0034, size 0x8, virtual false, abstract: false, final false
inline void set_startLifetime(float_t  value) ;

/// @brief Method set_startSize, addr 0x2fc003c, size 0xc, virtual false, abstract: false, final false
inline void set_startSize(float_t  value) ;

/// @brief Method set_velocity, addr 0x2fc0020, size 0xc, virtual false, abstract: false, final false
inline void set_velocity(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_Particle() ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AnimatedVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_InitialVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartSize", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ParticleSystem_Particle(::UnityEngine::Vector3  m_Position, ::UnityEngine::Vector3  m_Velocity, ::UnityEngine::Vector3  m_AnimatedVelocity, ::UnityEngine::Vector3  m_InitialVelocity, ::UnityEngine::Vector3  m_AxisOfRotation, ::UnityEngine::Vector3  m_Rotation, ::UnityEngine::Vector3  m_AngularVelocity, ::UnityEngine::Vector3  m_StartSize, ::UnityEngine::Color32  m_StartColor, uint32_t  m_RandomSeed, uint32_t  m_ParentRandomSeed, float_t  m_Lifetime, float_t  m_StartLifetime, int32_t  m_MeshIndex, float_t  m_EmitAccumulator0, float_t  m_EmitAccumulator1, uint32_t  m_Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x84};

/// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Velocity, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Velocity;

/// @brief Field m_AnimatedVelocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_AnimatedVelocity;

/// @brief Field m_InitialVelocity, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_InitialVelocity;

/// @brief Field m_AxisOfRotation, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_AxisOfRotation;

/// @brief Field m_Rotation, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Rotation;

/// @brief Field m_AngularVelocity, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_AngularVelocity;

/// @brief Field m_StartSize, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_StartSize;

/// @brief Field m_StartColor, offset: 0x60, size: 0x4, def value: None
 ::UnityEngine::Color32  m_StartColor;

/// @brief Field m_RandomSeed, offset: 0x64, size: 0x4, def value: None
 uint32_t  m_RandomSeed;

/// @brief Field m_ParentRandomSeed, offset: 0x68, size: 0x4, def value: None
 uint32_t  m_ParentRandomSeed;

/// @brief Field m_Lifetime, offset: 0x6c, size: 0x4, def value: None
 float_t  m_Lifetime;

/// @brief Field m_StartLifetime, offset: 0x70, size: 0x4, def value: None
 float_t  m_StartLifetime;

/// @brief Field m_MeshIndex, offset: 0x74, size: 0x4, def value: None
 int32_t  m_MeshIndex;

/// @brief Field m_EmitAccumulator0, offset: 0x78, size: 0x4, def value: None
 float_t  m_EmitAccumulator0;

/// @brief Field m_EmitAccumulator1, offset: 0x7c, size: 0x4, def value: None
 float_t  m_EmitAccumulator1;

/// @brief Field m_Flags, offset: 0x80, size: 0x4, def value: None
 uint32_t  m_Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Velocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_AnimatedVelocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_InitialVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_AxisOfRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_AngularVelocity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_StartSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_StartColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_RandomSeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_ParentRandomSeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Lifetime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_StartLifetime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_MeshIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_EmitAccumulator0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_EmitAccumulator1) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Flags) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_Particle, 0x84>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Color, UnityEngine.ParticleSystemGradientMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxGradient
struct CORDL_TYPE ParticleSystem_MinMaxGradient {
public:
// Declarations
/// @brief Method .ctor, addr 0x2fc076c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  color) ;

/// @brief Method op_Implicit, addr 0x2fc0788, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxGradient op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient(::UnityEngine::Color  color) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MinMaxGradient() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None }, CppParam { name: "m_GradientMin", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr ParticleSystem_MinMaxGradient(::UnityEngine::ParticleSystemGradientMode  m_Mode, ::UnityEngine::Gradient*  m_GradientMin, ::UnityEngine::Gradient*  m_GradientMax, ::UnityEngine::Color  m_ColorMin, ::UnityEngine::Color  m_ColorMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemGradientMode  m_Mode;

/// @brief Field m_GradientMin, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Gradient*  m_GradientMin;

/// @brief Field m_GradientMax, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Gradient*  m_GradientMax;

/// @brief Field m_ColorMin, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMin;

/// @brief Field m_ColorMax, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_GradientMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_GradientMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_ColorMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_ColorMax) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_MinMaxGradient, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.ParticleSystem::Particle
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/EmitParams
struct CORDL_TYPE ParticleSystem_EmitParams {
public:
// Declarations
 __declspec(property(put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(put=set_startColor)) ::UnityEngine::Color32  startColor;

/// @brief Method set_position, addr 0x2fc07a4, size 0x14, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_startColor, addr 0x2fc07b8, size 0x10, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color32  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_EmitParams() ;

// Ctor Parameters [CppParam { name: "m_Particle", ty: "::UnityEngine::ParticleSystem_Particle", modifiers: "", def_value: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartSizeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: None }]
constexpr ParticleSystem_EmitParams(::UnityEngine::ParticleSystem_Particle  m_Particle, bool  m_PositionSet, bool  m_VelocitySet, bool  m_AxisOfRotationSet, bool  m_RotationSet, bool  m_AngularVelocitySet, bool  m_StartSizeSet, bool  m_StartColorSet, bool  m_RandomSeedSet, bool  m_StartLifetimeSet, bool  m_MeshIndexSet, bool  m_ApplyShapeToPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12323};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field m_Particle, offset: 0x0, size: 0x84, def value: None
 ::UnityEngine::ParticleSystem_Particle  m_Particle;

/// @brief Field m_PositionSet, offset: 0x84, size: 0x1, def value: None
 bool  m_PositionSet;

/// @brief Field m_VelocitySet, offset: 0x85, size: 0x1, def value: None
 bool  m_VelocitySet;

/// @brief Field m_AxisOfRotationSet, offset: 0x86, size: 0x1, def value: None
 bool  m_AxisOfRotationSet;

/// @brief Field m_RotationSet, offset: 0x87, size: 0x1, def value: None
 bool  m_RotationSet;

/// @brief Field m_AngularVelocitySet, offset: 0x88, size: 0x1, def value: None
 bool  m_AngularVelocitySet;

/// @brief Field m_StartSizeSet, offset: 0x89, size: 0x1, def value: None
 bool  m_StartSizeSet;

/// @brief Field m_StartColorSet, offset: 0x8a, size: 0x1, def value: None
 bool  m_StartColorSet;

/// @brief Field m_RandomSeedSet, offset: 0x8b, size: 0x1, def value: None
 bool  m_RandomSeedSet;

/// @brief Field m_StartLifetimeSet, offset: 0x8c, size: 0x1, def value: None
 bool  m_StartLifetimeSet;

/// @brief Field m_MeshIndexSet, offset: 0x8d, size: 0x1, def value: None
 bool  m_MeshIndexSet;

/// @brief Field m_ApplyShapeToPosition, offset: 0x8e, size: 0x1, def value: None
 bool  m_ApplyShapeToPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_Particle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_PositionSet) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_VelocitySet) == 0x85, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_AxisOfRotationSet) == 0x86, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_RotationSet) == 0x87, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_AngularVelocitySet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_StartSizeSet) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_StartColorSet) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_RandomSeedSet) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_StartLifetimeSet) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_MeshIndexSet) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_ApplyShapeToPosition) == 0x8e, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_EmitParams, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/TrailModule
struct CORDL_TYPE ParticleSystem_TrailModule {
public:
// Declarations
 __declspec(property(put=set_enabled)) bool  enabled;

/// @brief Method .ctor, addr 0x2fc0444, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method set_enabled, addr 0x2fc07c8, size 0x44, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_enabled_Injected, addr 0x2fc080c, size 0x44, virtual false, abstract: false, final false
static inline void set_enabled_Injected(::ByRef<::UnityEngine::ParticleSystem_TrailModule>  _unity_self, bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_TrailModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
constexpr ParticleSystem_TrailModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_TrailModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem_TrailModule, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystem
class CORDL_TYPE ParticleSystem : public ::UnityEngine::Component {
public:
// Declarations
using EmitParams = ::UnityEngine::ParticleSystem_EmitParams;

using MainModule = ::UnityEngine::ParticleSystem_MainModule;

using MinMaxGradient = ::UnityEngine::ParticleSystem_MinMaxGradient;

using Particle = ::UnityEngine::ParticleSystem_Particle;

using SubEmittersModule = ::UnityEngine::ParticleSystem_SubEmittersModule;

using TrailModule = ::UnityEngine::ParticleSystem_TrailModule;

 __declspec(property(get=get_main)) ::UnityEngine::ParticleSystem_MainModule  main;

 __declspec(property(put=set_randomSeed)) uint32_t  randomSeed;

 __declspec(property(get=get_subEmitters)) ::UnityEngine::ParticleSystem_SubEmittersModule  subEmitters;

 __declspec(property(get=get_time)) float_t  time;

 __declspec(property(get=get_trails)) ::UnityEngine::ParticleSystem_TrailModule  trails;

 __declspec(property(get=get_useAutoRandomSeed, put=set_useAutoRandomSeed)) bool  useAutoRandomSeed;

/// @brief Method Emit, addr 0x2fc02f8, size 0x44, virtual false, abstract: false, final false
inline void Emit(int32_t  count) ;

/// @brief Method Emit, addr 0x2fc0380, size 0x54, virtual false, abstract: false, final false
inline void Emit(::UnityEngine::ParticleSystem_EmitParams  emitParams, int32_t  count) ;

/// @brief Method Emit, addr 0x2fc00f4, size 0x44, virtual false, abstract: false, final false
inline void Emit(::UnityEngine::ParticleSystem_Particle  particle) ;

/// @brief Method Emit, addr 0x2fbff10, size 0x104, virtual false, abstract: false, final false
inline void Emit(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, float_t  size, float_t  lifetime, ::UnityEngine::Color32  color) ;

/// @brief Method EmitOld_Internal, addr 0x2fc00b0, size 0x44, virtual false, abstract: false, final false
inline void EmitOld_Internal(::ByRef<::UnityEngine::ParticleSystem_Particle>  particle) ;

/// @brief Method Emit_Injected, addr 0x2fc03d4, size 0x54, virtual false, abstract: false, final false
inline void Emit_Injected(::ByRef<::UnityEngine::ParticleSystem_EmitParams>  emitParams, int32_t  count) ;

/// @brief Method Emit_Internal, addr 0x2fc033c, size 0x44, virtual false, abstract: false, final false
inline void Emit_Internal(int32_t  count) ;

static inline ::UnityEngine::ParticleSystem* New_ctor() ;

/// @brief Method Simulate, addr 0x2fc0238, size 0x6c, virtual false, abstract: false, final false
inline void Simulate(float_t  t, bool  withChildren, bool  restart, bool  fixedTimeStep) ;

/// @brief Method Stop, addr 0x2fc02a4, size 0x54, virtual false, abstract: false, final false
inline void Stop(bool  withChildren, ::UnityEngine::ParticleSystemStopBehavior  stopBehavior) ;

/// @brief Method .ctor, addr 0x2fc044c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_main, addr 0x2fc0428, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystem_MainModule get_main() ;

/// @brief Method get_subEmitters, addr 0x2fc0434, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystem_SubEmittersModule get_subEmitters() ;

/// @brief Method get_time, addr 0x2fc0138, size 0x3c, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method get_trails, addr 0x2fc0440, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystem_TrailModule get_trails() ;

/// @brief Method get_useAutoRandomSeed, addr 0x2fc01b8, size 0x3c, virtual false, abstract: false, final false
inline bool get_useAutoRandomSeed() ;

/// @brief Method set_randomSeed, addr 0x2fc0174, size 0x44, virtual false, abstract: false, final false
inline void set_randomSeed(uint32_t  value) ;

/// @brief Method set_useAutoRandomSeed, addr 0x2fc01f4, size 0x44, virtual false, abstract: false, final false
inline void set_useAutoRandomSeed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystem(ParticleSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystem(ParticleSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12325};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_MainModule, "UnityEngine", "ParticleSystem/MainModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_Particle, "UnityEngine", "ParticleSystem/Particle");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_SubEmittersModule, "UnityEngine", "ParticleSystem/SubEmittersModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem_TrailModule, "UnityEngine", "ParticleSystem/TrailModule");
