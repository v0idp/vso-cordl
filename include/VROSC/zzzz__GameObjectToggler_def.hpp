#pragma once
// IWYU pragma private; include "VROSC/GameObjectToggler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(GameObjectToggler)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class GameObjectToggler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GameObjectToggler);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GameObjectToggler
class CORDL_TYPE GameObjectToggler : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _onWithSignal, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__onWithSignal, put=__cordl_internal_set__onWithSignal)) bool  _onWithSignal;

/// @brief Field _overrideStartState, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__overrideStartState, put=__cordl_internal_set__overrideStartState)) bool  _overrideStartState;

/// @brief Field _setState, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get__setState, put=__cordl_internal_set__setState)) bool  _setState;

/// @brief Field _setStateTo, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__setStateTo, put=__cordl_internal_set__setStateTo)) bool  _setStateTo;

/// @brief Field _startEnabled, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__startEnabled, put=__cordl_internal_set__startEnabled)) bool  _startEnabled;

/// @brief Field _targetGameObjects, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetGameObjects, put=__cordl_internal_set__targetGameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  _targetGameObjects;

static inline ::VROSC::GameObjectToggler* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171ce04, size 0x120, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x171cf24, size 0x6c, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method Start, addr 0x171cd44, size 0xc0, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__onWithSignal() const;

constexpr bool& __cordl_internal_get__onWithSignal() ;

constexpr bool const& __cordl_internal_get__overrideStartState() const;

constexpr bool& __cordl_internal_get__overrideStartState() ;

constexpr bool const& __cordl_internal_get__setState() const;

constexpr bool& __cordl_internal_get__setState() ;

constexpr bool const& __cordl_internal_get__setStateTo() const;

constexpr bool& __cordl_internal_get__setStateTo() ;

constexpr bool const& __cordl_internal_get__startEnabled() const;

constexpr bool& __cordl_internal_get__startEnabled() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__targetGameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__targetGameObjects() ;

constexpr void __cordl_internal_set__onWithSignal(bool  value) ;

constexpr void __cordl_internal_set__overrideStartState(bool  value) ;

constexpr void __cordl_internal_set__setState(bool  value) ;

constexpr void __cordl_internal_set__setStateTo(bool  value) ;

constexpr void __cordl_internal_set__startEnabled(bool  value) ;

constexpr void __cordl_internal_set__targetGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  value) ;

/// @brief Method .ctor, addr 0x171cf90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectToggler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectToggler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectToggler(GameObjectToggler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectToggler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectToggler(GameObjectToggler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{953};

/// @brief Field _targetGameObjects, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  ____targetGameObjects;

/// @brief Field _overrideStartState, offset: 0x50, size: 0x1, def value: None
 bool  ____overrideStartState;

/// @brief Field _startEnabled, offset: 0x51, size: 0x1, def value: None
 bool  ____startEnabled;

/// @brief Field _onWithSignal, offset: 0x52, size: 0x1, def value: None
 bool  ____onWithSignal;

/// @brief Field _setState, offset: 0x53, size: 0x1, def value: None
 bool  ____setState;

/// @brief Field _setStateTo, offset: 0x54, size: 0x1, def value: None
 bool  ____setStateTo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GameObjectToggler, ____targetGameObjects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::GameObjectToggler, ____overrideStartState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::GameObjectToggler, ____startEnabled) == 0x51, "Offset mismatch!");

static_assert(offsetof(::VROSC::GameObjectToggler, ____onWithSignal) == 0x52, "Offset mismatch!");

static_assert(offsetof(::VROSC::GameObjectToggler, ____setState) == 0x53, "Offset mismatch!");

static_assert(offsetof(::VROSC::GameObjectToggler, ____setStateTo) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GameObjectToggler, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GameObjectToggler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GameObjectToggler*, "VROSC", "GameObjectToggler");
