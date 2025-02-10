#pragma once
// IWYU pragma private; include "VROSC/GameObjectDestroyer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(GameObjectDestroyer)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class GameObjectDestroyer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GameObjectDestroyer);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GameObjectDestroyer
class CORDL_TYPE GameObjectDestroyer : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _targetGameObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetGameObject, put=__cordl_internal_set__targetGameObject)) ::UnityW<::UnityEngine::GameObject>  _targetGameObject;

static inline ::VROSC::GameObjectDestroyer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171cc94, size 0xa8, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__targetGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__targetGameObject() ;

constexpr void __cordl_internal_set__targetGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x171cd3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectDestroyer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectDestroyer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectDestroyer(GameObjectDestroyer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectDestroyer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectDestroyer(GameObjectDestroyer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{952};

/// @brief Field _targetGameObject, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____targetGameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GameObjectDestroyer, ____targetGameObject) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GameObjectDestroyer, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GameObjectDestroyer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GameObjectDestroyer*, "VROSC", "GameObjectDestroyer");
