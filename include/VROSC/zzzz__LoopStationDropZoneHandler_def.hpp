#pragma once
// IWYU pragma private; include "VROSC/LoopStationDropZoneHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopStationDropZoneHandler)
namespace VROSC {
class LoopDropzone;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStation;
}
// Forward declare root types
namespace VROSC {
class LoopStationDropZoneHandler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationDropZoneHandler);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDropZoneHandler
class CORDL_TYPE LoopStationDropZoneHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CopyDropzone)) ::UnityW<::VROSC::LoopDropzone>  CopyDropzone;

 __declspec(property(get=get_DeleteDropzone)) ::UnityW<::VROSC::LoopDropzone>  DeleteDropzone;

/// @brief Field _addToNewGroupZone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__addToNewGroupZone, put=__cordl_internal_set__addToNewGroupZone)) ::UnityW<::VROSC::LoopDropzone>  _addToNewGroupZone;

/// @brief Field _copyDropZone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__copyDropZone, put=__cordl_internal_set__copyDropZone)) ::UnityW<::VROSC::LoopDropzone>  _copyDropZone;

/// @brief Field _deleteDropZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteDropZone, put=__cordl_internal_set__deleteDropZone)) ::UnityW<::VROSC::LoopDropzone>  _deleteDropZone;

/// @brief Field _loopStation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Method AddNewUserGroupByDrop, addr 0x18bdef0, size 0x94, virtual false, abstract: false, final false
inline bool AddNewUserGroupByDrop(::VROSC::LoopPlayer*  loopPlayer, ::VROSC::LoopStationGroup*  origin) ;

/// @brief Method CopyLoopByDrop, addr 0x18bdf84, size 0xc4, virtual false, abstract: false, final false
inline bool CopyLoopByDrop(::VROSC::LoopPlayer*  loopPlayer, ::VROSC::LoopStationGroup*  origin) ;

/// @brief Method DeleteLoopByDrop, addr 0x18bdecc, size 0x24, virtual false, abstract: false, final false
inline bool DeleteLoopByDrop(::VROSC::LoopPlayer*  loopPlayer, ::VROSC::LoopStationGroup*  origin) ;

static inline ::VROSC::LoopStationDropZoneHandler* New_ctor() ;

/// @brief Method Setup, addr 0x18ada98, size 0x2d8, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation) ;

/// @brief Method UpdateDropzonesVisible, addr 0x18bde50, size 0x7c, virtual false, abstract: false, final false
inline void UpdateDropzonesVisible(bool  shouldBeVisisble) ;

constexpr ::UnityW<::VROSC::LoopDropzone> const& __cordl_internal_get__addToNewGroupZone() const;

constexpr ::UnityW<::VROSC::LoopDropzone>& __cordl_internal_get__addToNewGroupZone() ;

constexpr ::UnityW<::VROSC::LoopDropzone> const& __cordl_internal_get__copyDropZone() const;

constexpr ::UnityW<::VROSC::LoopDropzone>& __cordl_internal_get__copyDropZone() ;

constexpr ::UnityW<::VROSC::LoopDropzone> const& __cordl_internal_get__deleteDropZone() const;

constexpr ::UnityW<::VROSC::LoopDropzone>& __cordl_internal_get__deleteDropZone() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr void __cordl_internal_set__addToNewGroupZone(::UnityW<::VROSC::LoopDropzone>  value) ;

constexpr void __cordl_internal_set__copyDropZone(::UnityW<::VROSC::LoopDropzone>  value) ;

constexpr void __cordl_internal_set__deleteDropZone(::UnityW<::VROSC::LoopDropzone>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

/// @brief Method .ctor, addr 0x18be38c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CopyDropzone, addr 0x18bde48, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopDropzone> get_CopyDropzone() ;

/// @brief Method get_DeleteDropzone, addr 0x18bde40, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopDropzone> get_DeleteDropzone() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDropZoneHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDropZoneHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDropZoneHandler(LoopStationDropZoneHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDropZoneHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDropZoneHandler(LoopStationDropZoneHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{748};

/// @brief Field _deleteDropZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopDropzone>  ____deleteDropZone;

/// @brief Field _copyDropZone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopDropzone>  ____copyDropZone;

/// @brief Field _addToNewGroupZone, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopDropzone>  ____addToNewGroupZone;

/// @brief Field _loopStation, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDropZoneHandler, ____deleteDropZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDropZoneHandler, ____copyDropZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDropZoneHandler, ____addToNewGroupZone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDropZoneHandler, ____loopStation) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDropZoneHandler, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationDropZoneHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDropZoneHandler*, "VROSC", "LoopStationDropZoneHandler");
