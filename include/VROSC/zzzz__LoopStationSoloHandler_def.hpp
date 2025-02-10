#pragma once
// IWYU pragma private; include "VROSC/LoopStationSoloHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LoopStationSoloHandler)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroupCore;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStationLoopHandler;
}
namespace VROSC {
class LoopStation;
}
// Forward declare root types
namespace VROSC {
class LoopStationSoloHandler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationSoloHandler);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationSoloHandler
class CORDL_TYPE LoopStationSoloHandler : public ::System::Object {
public:
// Declarations
/// @brief Field _groups, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__groups, put=__cordl_internal_set__groups)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  _groups;

/// @brief Field _loopGroupCore, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopGroupCore, put=__cordl_internal_set__loopGroupCore)) ::UnityW<::VROSC::LoopStationGroupCore>  _loopGroupCore;

/// @brief Field _loopHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopHandler, put=__cordl_internal_set__loopHandler)) ::UnityW<::VROSC::LoopStationLoopHandler>  _loopHandler;

/// @brief Field _loopStation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _loops, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__loops, put=__cordl_internal_set__loops)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  _loops;

/// @brief Field _soloGroups, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__soloGroups, put=__cordl_internal_set__soloGroups)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  _soloGroups;

/// @brief Field _soloTracks, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__soloTracks, put=__cordl_internal_set__soloTracks)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  _soloTracks;

/// @brief Method Finalize, addr 0x18bc508, size 0x398, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GroupCreated, addr 0x18bd0b0, size 0x14c, virtual false, abstract: false, final false
inline void GroupCreated(::VROSC::LoopStationGroup*  group) ;

/// @brief Method GroupRemoved, addr 0x18bd1fc, size 0x164, virtual false, abstract: false, final false
inline void GroupRemoved(::VROSC::LoopStationGroup*  group) ;

/// @brief Method GroupSoloChanged, addr 0x18bcfd8, size 0xd8, virtual false, abstract: false, final false
inline void GroupSoloChanged(::VROSC::LoopStationGroup*  group, bool  soloEnabled) ;

/// @brief Method LoopDestroyed, addr 0x18bc9ec, size 0x184, virtual false, abstract: false, final false
inline void LoopDestroyed(::VROSC::LoopPlayer*  loopToDestroy, bool  fromReset) ;

/// @brief Method LoopIsInASoloGroup, addr 0x18bcd6c, size 0x194, virtual false, abstract: false, final false
inline bool LoopIsInASoloGroup(::VROSC::LoopPlayer*  loop) ;

/// @brief Method LoopRecorded, addr 0x18bc8a0, size 0x14c, virtual false, abstract: false, final false
inline void LoopRecorded(::VROSC::LoopPlayer*  newLoop) ;

/// @brief Method LoopSoloChanged, addr 0x18bcf00, size 0xd8, virtual false, abstract: false, final false
inline void LoopSoloChanged(::VROSC::LoopPlayer*  loopPlayer, bool  soloEnabled) ;

static inline ::VROSC::LoopStationSoloHandler* New_ctor(::VROSC::LoopStation*  loopStation) ;

/// @brief Method UpdateAllTracks, addr 0x18bcb70, size 0x1fc, virtual false, abstract: false, final false
inline void UpdateAllTracks() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>* const& __cordl_internal_get__groups() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*& __cordl_internal_get__groups() ;

constexpr ::UnityW<::VROSC::LoopStationGroupCore> const& __cordl_internal_get__loopGroupCore() const;

constexpr ::UnityW<::VROSC::LoopStationGroupCore>& __cordl_internal_get__loopGroupCore() ;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& __cordl_internal_get__loopHandler() const;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& __cordl_internal_get__loopHandler() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get__loops() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get__loops() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>* const& __cordl_internal_get__soloGroups() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*& __cordl_internal_get__soloGroups() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get__soloTracks() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get__soloTracks() ;

constexpr void __cordl_internal_set__groups(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

constexpr void __cordl_internal_set__loopGroupCore(::UnityW<::VROSC::LoopStationGroupCore>  value) ;

constexpr void __cordl_internal_set__loopHandler(::UnityW<::VROSC::LoopStationLoopHandler>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__loops(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

constexpr void __cordl_internal_set__soloGroups(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  value) ;

constexpr void __cordl_internal_set__soloTracks(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

/// @brief Method .ctor, addr 0x18add70, size 0x374, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopStation*  loopStation) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationSoloHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationSoloHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationSoloHandler(LoopStationSoloHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationSoloHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationSoloHandler(LoopStationSoloHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{744};

/// @brief Field _loopStation, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _loopHandler, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationLoopHandler>  ____loopHandler;

/// @brief Field _loopGroupCore, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroupCore>  ____loopGroupCore;

/// @brief Field _soloTracks, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  ____soloTracks;

/// @brief Field _loops, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  ____loops;

/// @brief Field _groups, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  ____groups;

/// @brief Field _soloGroups, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  ____soloGroups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationSoloHandler, ____loopStation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationSoloHandler, ____loopHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationSoloHandler, ____loopGroupCore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationSoloHandler, ____soloTracks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationSoloHandler, ____loops) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationSoloHandler, ____groups) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationSoloHandler, ____soloGroups) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationSoloHandler, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationSoloHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationSoloHandler*, "VROSC", "LoopStationSoloHandler");
