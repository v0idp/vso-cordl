#pragma once
// IWYU pragma private; include "VROSC/PositionOnSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(PositionOnSignal)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class PositionOnSignal;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PositionOnSignal);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PositionOnSignal
class CORDL_TYPE PositionOnSignal : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field OnPositionChanged, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPositionChanged, put=__cordl_internal_set_OnPositionChanged)) ::System::Action_1<::UnityEngine::Vector3>*  OnPositionChanged;

static inline ::VROSC::PositionOnSignal* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171fcec, size 0x4, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x171fd78, size 0x4, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method SetPosition, addr 0x171fcf0, size 0x88, virtual false, abstract: false, final false
inline void SetPosition(::VROSC::Signal*  signal) ;

constexpr ::System::Action_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnPositionChanged() const;

constexpr ::System::Action_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnPositionChanged() ;

constexpr void __cordl_internal_set_OnPositionChanged(::System::Action_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x171fd7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PositionOnSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PositionOnSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PositionOnSignal(PositionOnSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PositionOnSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PositionOnSignal(PositionOnSignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{967};

/// @brief Field OnPositionChanged, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Vector3>*  ___OnPositionChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PositionOnSignal, ___OnPositionChanged) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PositionOnSignal, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PositionOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PositionOnSignal*, "VROSC", "PositionOnSignal");
