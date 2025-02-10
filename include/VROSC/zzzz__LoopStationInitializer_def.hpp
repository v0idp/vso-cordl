#pragma once
// IWYU pragma private; include "VROSC/LoopStationInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationInitializer)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class LoopStationInitializer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationInitializer);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationInitializer
class CORDL_TYPE LoopStationInitializer : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _collider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Method GetLoopStationParentRecursive, addr 0x18bc0b0, size 0x11c, virtual false, abstract: false, final false
inline bool GetLoopStationParentRecursive(::UnityEngine::Transform*  t) ;

/// @brief Method MoveBackRecursive, addr 0x18bbf48, size 0x168, virtual false, abstract: false, final false
inline void MoveBackRecursive() ;

static inline ::VROSC::LoopStationInitializer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x18bbe94, size 0xb4, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x18bc1cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationInitializer(LoopStationInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationInitializer(LoopStationInitializer const& ) = delete;

/// @brief Field MaxLoopStations offset 0xffffffff size 0x4
static constexpr int32_t  MaxLoopStations{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{742};

/// @brief Field _collider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationInitializer, ____collider) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationInitializer, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationInitializer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationInitializer*, "VROSC", "LoopStationInitializer");
