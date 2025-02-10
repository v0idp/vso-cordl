#pragma once
// IWYU pragma private; include "VROSC/PrefabSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(PrefabSpawner)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class SignalNode;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class PrefabSpawner;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PrefabSpawner);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PrefabSpawner
class CORDL_TYPE PrefabSpawner : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _currentlySignalingInstance, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentlySignalingInstance, put=__cordl_internal_set__currentlySignalingInstance)) ::UnityW<::VROSC::SignalNode>  _currentlySignalingInstance;

/// @brief Field _instances, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__instances, put=__cordl_internal_set__instances)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::SignalNode>>*  _instances;

/// @brief Field _prefab, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefab, put=__cordl_internal_set__prefab)) ::UnityW<::VROSC::SignalNode>  _prefab;

/// @brief Field _spawnLocation, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnLocation, put=__cordl_internal_set__spawnLocation)) ::UnityW<::UnityEngine::Transform>  _spawnLocation;

/// @brief Method Clear, addr 0x1720100, size 0x104, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::VROSC::PrefabSpawner* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171fd84, size 0x274, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1720094, size 0x6c, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x171fff8, size 0x9c, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

constexpr ::UnityW<::VROSC::SignalNode> const& __cordl_internal_get__currentlySignalingInstance() const;

constexpr ::UnityW<::VROSC::SignalNode>& __cordl_internal_get__currentlySignalingInstance() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::SignalNode>>* const& __cordl_internal_get__instances() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::SignalNode>>*& __cordl_internal_get__instances() ;

constexpr ::UnityW<::VROSC::SignalNode> const& __cordl_internal_get__prefab() const;

constexpr ::UnityW<::VROSC::SignalNode>& __cordl_internal_get__prefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__spawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__spawnLocation() ;

constexpr void __cordl_internal_set__currentlySignalingInstance(::UnityW<::VROSC::SignalNode>  value) ;

constexpr void __cordl_internal_set__instances(::System::Collections::Generic::List_1<::UnityW<::VROSC::SignalNode>>*  value) ;

constexpr void __cordl_internal_set__prefab(::UnityW<::VROSC::SignalNode>  value) ;

constexpr void __cordl_internal_set__spawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1720204, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrefabSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrefabSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrefabSpawner(PrefabSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrefabSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrefabSpawner(PrefabSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{968};

/// @brief Field _prefab, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::SignalNode>  ____prefab;

/// @brief Field _spawnLocation, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____spawnLocation;

/// @brief Field _instances, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::SignalNode>>*  ____instances;

/// @brief Field _currentlySignalingInstance, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::SignalNode>  ____currentlySignalingInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PrefabSpawner, ____prefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::PrefabSpawner, ____spawnLocation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::PrefabSpawner, ____instances) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::PrefabSpawner, ____currentlySignalingInstance) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PrefabSpawner, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PrefabSpawner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PrefabSpawner*, "VROSC", "PrefabSpawner");
