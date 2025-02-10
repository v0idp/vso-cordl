#pragma once
// IWYU pragma private; include "VROSC/TimelinePlaybackHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimelinePlaybackHelper)
namespace System {
class Action;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
// Forward declare root types
namespace VROSC {
class TimelinePlaybackHelper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TimelinePlaybackHelper);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TimelinePlaybackHelper
class CORDL_TYPE TimelinePlaybackHelper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsPlaying, put=set_IsPlaying)) bool  IsPlaying;

/// @brief Field OnEnd, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnd, put=__cordl_internal_set_OnEnd)) ::System::Action*  OnEnd;

/// @brief Field <IsPlaying>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlaying_k__BackingField, put=__cordl_internal_set__IsPlaying_k__BackingField)) bool  _IsPlaying_k__BackingField;

/// @brief Field _endTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__endTime, put=__cordl_internal_set__endTime)) double_t  _endTime;

/// @brief Field _startTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__startTime, put=__cordl_internal_set__startTime)) double_t  _startTime;

static inline ::VROSC::TimelinePlaybackHelper* New_ctor() ;

/// @brief Method Start, addr 0x17a8708, size 0x6c, virtual false, abstract: false, final false
inline void Start(::UnityEngine::Playables::PlayableAsset*  playable) ;

/// @brief Method Stop, addr 0x17a8944, size 0x34, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x17a8844, size 0x54, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_OnEnd() const;

constexpr ::System::Action*& __cordl_internal_get_OnEnd() ;

constexpr bool const& __cordl_internal_get__IsPlaying_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPlaying_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__endTime() const;

constexpr double_t& __cordl_internal_get__endTime() ;

constexpr double_t const& __cordl_internal_get__startTime() const;

constexpr double_t& __cordl_internal_get__startTime() ;

constexpr void __cordl_internal_set_OnEnd(::System::Action*  value) ;

constexpr void __cordl_internal_set__IsPlaying_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__endTime(double_t  value) ;

constexpr void __cordl_internal_set__startTime(double_t  value) ;

/// @brief Method .ctor, addr 0x17a8f08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsPlaying, addr 0x17aa230, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method set_IsPlaying, addr 0x17aa224, size 0xc, virtual false, abstract: false, final false
inline void set_IsPlaying(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimelinePlaybackHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimelinePlaybackHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelinePlaybackHelper(TimelinePlaybackHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelinePlaybackHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelinePlaybackHelper(TimelinePlaybackHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1410};

/// @brief Field <IsPlaying>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsPlaying_k__BackingField;

/// @brief Field _endTime, offset: 0x18, size: 0x8, def value: None
 double_t  ____endTime;

/// @brief Field _startTime, offset: 0x20, size: 0x8, def value: None
 double_t  ____startTime;

/// @brief Field OnEnd, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___OnEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TimelinePlaybackHelper, ____IsPlaying_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimelinePlaybackHelper, ____endTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimelinePlaybackHelper, ____startTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimelinePlaybackHelper, ___OnEnd) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TimelinePlaybackHelper, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TimelinePlaybackHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TimelinePlaybackHelper*, "VROSC", "TimelinePlaybackHelper");
