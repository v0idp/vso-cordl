#pragma once
// IWYU pragma private; include "VROSC/MarimbaCreationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MarimbaCreationBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class MarimbaCreationBehaviour_State;
}
namespace VROSC {
class Marimba;
}
// Forward declare root types
namespace VROSC {
class MarimbaCreationBehaviour;
}
namespace VROSC {
class MarimbaCreationBehaviour_State;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MarimbaCreationBehaviour);
MARK_REF_PTR_T(::VROSC::MarimbaCreationBehaviour_State);
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Quaternion, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaCreationBehaviour/State
class CORDL_TYPE MarimbaCreationBehaviour_State : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_Scale)) float_t  Scale;

/// @brief Field <Color>k__BackingField, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__Color_k__BackingField, put=__cordl_internal_set__Color_k__BackingField)) ::UnityEngine::Color  _Color_k__BackingField;

/// @brief Field <Position>k__BackingField, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__Position_k__BackingField, put=__cordl_internal_set__Position_k__BackingField)) ::UnityEngine::Vector3  _Position_k__BackingField;

/// @brief Field <Rotation>k__BackingField, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__Rotation_k__BackingField, put=__cordl_internal_set__Rotation_k__BackingField)) ::UnityEngine::Quaternion  _Rotation_k__BackingField;

/// @brief Field <Scale>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Scale_k__BackingField, put=__cordl_internal_set__Scale_k__BackingField)) float_t  _Scale_k__BackingField;

static inline ::VROSC::MarimbaCreationBehaviour_State* New_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  scale, ::UnityEngine::Color  color) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__Color_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__Color_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Position_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Position_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__Rotation_k__BackingField() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__Rotation_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Scale_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Scale_k__BackingField() ;

constexpr void __cordl_internal_set__Color_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__Position_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Rotation_k__BackingField(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__Scale_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x176b338, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  scale, ::UnityEngine::Color  color) ;

/// @brief Method get_Color, addr 0x176b83c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_Position, addr 0x176b81c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation, addr 0x176b830, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Scale, addr 0x176b828, size 0x8, virtual false, abstract: false, final false
inline float_t get_Scale() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarimbaCreationBehaviour_State() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaCreationBehaviour_State", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaCreationBehaviour_State(MarimbaCreationBehaviour_State && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaCreationBehaviour_State", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaCreationBehaviour_State(MarimbaCreationBehaviour_State const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1213};

/// @brief Field <Position>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Position_k__BackingField;

/// @brief Field <Scale>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  ____Scale_k__BackingField;

/// @brief Field <Rotation>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____Rotation_k__BackingField;

/// @brief Field <Color>k__BackingField, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____Color_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MarimbaCreationBehaviour_State, ____Position_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationBehaviour_State, ____Scale_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationBehaviour_State, ____Rotation_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationBehaviour_State, ____Color_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaCreationBehaviour_State, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaCreationBehaviour
class CORDL_TYPE MarimbaCreationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using State = ::VROSC::MarimbaCreationBehaviour_State;

/// @brief Field _appear, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__appear, put=__cordl_internal_set__appear)) float_t  _appear;

/// @brief Field _end, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__end, put=__cordl_internal_set__end)) ::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*>  _end;

/// @brief Field _mapping, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mapping, put=__cordl_internal_set__mapping)) ::ArrayW<float_t,::Array<float_t>*>  _mapping;

/// @brief Field _marimba, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__marimba, put=__cordl_internal_set__marimba)) ::UnityW<::VROSC::Marimba>  _marimba;

/// @brief Field _start, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__start, put=__cordl_internal_set__start)) ::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*>  _start;

/// @brief Field _xzScale, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__xzScale, put=__cordl_internal_set__xzScale)) ::UnityEngine::AnimationCurve*  _xzScale;

/// @brief Field _yScale, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__yScale, put=__cordl_internal_set__yScale)) ::UnityEngine::AnimationCurve*  _yScale;

/// @brief Method GetMapping, addr 0x176ae84, size 0x4b4, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> GetMapping() ;

static inline ::VROSC::MarimbaCreationBehaviour* New_ctor() ;

/// @brief Method OnPlayableDestroy, addr 0x176b748, size 0xcc, virtual false, abstract: false, final false
inline void OnPlayableDestroy() ;

/// @brief Method ProcessFrame, addr 0x176b3b8, size 0x390, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176aa04, size 0x478, virtual false, abstract: false, final false
inline void Setup(::VROSC::Marimba*  marimba, ::UnityEngine::Transform*  fromPoint, float_t  positionOffset, float_t  rotationOffset) ;

constexpr float_t const& __cordl_internal_get__appear() const;

constexpr float_t& __cordl_internal_get__appear() ;

constexpr ::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*> const& __cordl_internal_get__end() const;

constexpr ::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*>& __cordl_internal_get__end() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__mapping() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__mapping() ;

constexpr ::UnityW<::VROSC::Marimba> const& __cordl_internal_get__marimba() const;

constexpr ::UnityW<::VROSC::Marimba>& __cordl_internal_get__marimba() ;

constexpr ::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*> const& __cordl_internal_get__start() const;

constexpr ::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*>& __cordl_internal_get__start() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__xzScale() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__xzScale() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__yScale() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__yScale() ;

constexpr void __cordl_internal_set__appear(float_t  value) ;

constexpr void __cordl_internal_set__end(::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*>  value) ;

constexpr void __cordl_internal_set__mapping(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__marimba(::UnityW<::VROSC::Marimba>  value) ;

constexpr void __cordl_internal_set__start(::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*>  value) ;

constexpr void __cordl_internal_set__xzScale(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__yScale(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x176b814, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarimbaCreationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaCreationBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaCreationBehaviour(MarimbaCreationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaCreationBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaCreationBehaviour(MarimbaCreationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1214};

/// @brief Field _marimba, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::Marimba>  ____marimba;

/// @brief Field _start, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*>  ____start;

/// @brief Field _end, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::VROSC::MarimbaCreationBehaviour_State*,::Array<::VROSC::MarimbaCreationBehaviour_State*>*>  ____end;

/// @brief Field _mapping, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____mapping;

/// @brief Field _appear, offset: 0x30, size: 0x4, def value: None
 float_t  ____appear;

/// @brief Field _xzScale, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____xzScale;

/// @brief Field _yScale, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____yScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MarimbaCreationBehaviour, ____marimba) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationBehaviour, ____start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationBehaviour, ____end) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationBehaviour, ____mapping) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationBehaviour, ____appear) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationBehaviour, ____xzScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaCreationBehaviour, ____yScale) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaCreationBehaviour, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MarimbaCreationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaCreationBehaviour*, "VROSC", "MarimbaCreationBehaviour");
NEED_NO_BOX(::VROSC::MarimbaCreationBehaviour_State);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaCreationBehaviour_State*, "VROSC", "MarimbaCreationBehaviour/State");
