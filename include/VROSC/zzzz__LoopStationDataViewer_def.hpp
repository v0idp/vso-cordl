#pragma once
// IWYU pragma private; include "VROSC/LoopStationDataViewer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopStationDataViewer)
namespace VROSC {
class LoopStationDataModel;
}
namespace VROSC {
class LoopStation;
}
// Forward declare root types
namespace VROSC {
class LoopStationDataViewer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationDataViewer);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataViewer
class CORDL_TYPE LoopStationDataViewer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::VROSC::LoopStationDataModel*  _data;

/// @brief Field _loopStation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

static inline ::VROSC::LoopStationDataViewer* New_ctor() ;

/// @brief Method Update, addr 0x187389c, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::VROSC::LoopStationDataModel* const& __cordl_internal_get__data() const;

constexpr ::VROSC::LoopStationDataModel*& __cordl_internal_get__data() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr void __cordl_internal_set__data(::VROSC::LoopStationDataModel*  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

/// @brief Method .ctor, addr 0x18738b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataViewer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataViewer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataViewer(LoopStationDataViewer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataViewer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataViewer(LoopStationDataViewer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{536};

/// @brief Field _loopStation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _data, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopStationDataModel*  ____data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataViewer, ____loopStation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataViewer, ____data) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataViewer, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationDataViewer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataViewer*, "VROSC", "LoopStationDataViewer");
