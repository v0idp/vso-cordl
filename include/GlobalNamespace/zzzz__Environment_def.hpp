#pragma once
// IWYU pragma private; include "GlobalNamespace/Environment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Environment)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC::UI {
struct UISchemeColors;
}
namespace VROSC {
class EnvironmentData;
}
// Forward declare root types
namespace GlobalNamespace {
class Environment;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Environment);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Environment
class CORDL_TYPE Environment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BassModifier)) float_t  BassModifier;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::EnvironmentData>  Data;

 __declspec(property(get=get_EffectsAmount, put=set_EffectsAmount)) float_t  EffectsAmount;

 __declspec(property(get=get_MidModifier)) float_t  MidModifier;

 __declspec(property(get=get_TopModifier)) float_t  TopModifier;

/// @brief Field <EffectsAmount>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__EffectsAmount_k__BackingField, put=__cordl_internal_set__EffectsAmount_k__BackingField)) float_t  _EffectsAmount_k__BackingField;

/// @brief Field _data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::EnvironmentData>  _data;

/// @brief Field _effectsAmount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__effectsAmount, put=__cordl_internal_set__effectsAmount)) float_t  _effectsAmount;

/// @brief Method Awake, addr 0x16c2724, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetChildrenRecurisve, addr 0x16c2814, size 0x120, virtual false, abstract: false, final false
inline void GetChildrenRecurisve(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  list, ::UnityEngine::GameObject*  gameObject) ;

static inline ::GlobalNamespace::Environment* New_ctor() ;

/// @brief Method SetActive, addr 0x16c2934, size 0x100, virtual false, abstract: false, final false
inline void SetActive(bool  active, float_t  effectsAmount, ::VROSC::UI::UISchemeColors  colors) ;

/// @brief Method SetAllSubObjectsToEnvironmentLayer, addr 0x16c2560, size 0x1c4, virtual false, abstract: false, final false
inline void SetAllSubObjectsToEnvironmentLayer() ;

/// @brief Method SetEffectsAmount, addr 0x16c2558, size 0x8, virtual false, abstract: false, final false
inline void SetEffectsAmount(float_t  effectsAmount) ;

constexpr float_t const& __cordl_internal_get__EffectsAmount_k__BackingField() const;

constexpr float_t& __cordl_internal_get__EffectsAmount_k__BackingField() ;

constexpr ::UnityW<::VROSC::EnvironmentData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::EnvironmentData>& __cordl_internal_get__data() ;

constexpr float_t const& __cordl_internal_get__effectsAmount() const;

constexpr float_t& __cordl_internal_get__effectsAmount() ;

constexpr void __cordl_internal_set__EffectsAmount_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::EnvironmentData>  value) ;

constexpr void __cordl_internal_set__effectsAmount(float_t  value) ;

/// @brief Method .ctor, addr 0x16c2a34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BassModifier, addr 0x16c24dc, size 0x24, virtual false, abstract: false, final false
inline float_t get_BassModifier() ;

/// @brief Method get_Data, addr 0x16c24d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::EnvironmentData> get_Data() ;

/// @brief Method get_EffectsAmount, addr 0x16c2548, size 0x8, virtual false, abstract: false, final false
inline float_t get_EffectsAmount() ;

/// @brief Method get_MidModifier, addr 0x16c2500, size 0x24, virtual false, abstract: false, final false
inline float_t get_MidModifier() ;

/// @brief Method get_TopModifier, addr 0x16c2524, size 0x24, virtual false, abstract: false, final false
inline float_t get_TopModifier() ;

/// @brief Method set_EffectsAmount, addr 0x16c2550, size 0x8, virtual false, abstract: false, final false
inline void set_EffectsAmount(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Environment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Environment(Environment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Environment(Environment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{51};

/// @brief Field _data, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentData>  ____data;

/// @brief Field _effectsAmount, offset: 0x28, size: 0x4, def value: None
 float_t  ____effectsAmount;

/// @brief Field <EffectsAmount>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 float_t  ____EffectsAmount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Environment, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Environment, ____effectsAmount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Environment, ____EffectsAmount_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Environment, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Environment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Environment*, "", "Environment");
