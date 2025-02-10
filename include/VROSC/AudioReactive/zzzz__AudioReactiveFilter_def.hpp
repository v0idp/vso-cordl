#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/AudioReactiveFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReactiveFilter)
namespace VROSC::AudioReactive {
class AudioReactiveFilter_FilterSettings;
}
namespace VROSC::AudioReactive {
struct FilterSettings_AudioReactiveFilter_BeatFilter;
}
// Forward declare root types
namespace VROSC::AudioReactive {
struct FilterSettings_AudioReactiveFilter_BeatFilter;
}
namespace VROSC::AudioReactive {
class AudioReactiveFilter;
}
namespace VROSC::AudioReactive {
class AudioReactiveFilter_FilterSettings;
}
// Write type traits
MARK_VAL_T(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter);
MARK_REF_PTR_T(::VROSC::AudioReactive::AudioReactiveFilter);
MARK_REF_PTR_T(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings);
// Dependencies 
namespace VROSC::AudioReactive {
// Is value type: true
// CS Name: VROSC.AudioReactive.AudioReactiveFilter/FilterSettings/BeatFilter
struct CORDL_TYPE FilterSettings_AudioReactiveFilter_BeatFilter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FilterSettings_AudioReactiveFilter_BeatFilter_Unwrapped
enum struct __FilterSettings_AudioReactiveFilter_BeatFilter_Unwrapped : int32_t {
__E_Beat1 = static_cast<int32_t>(0x1),
__E_Beat2 = static_cast<int32_t>(0x2),
__E_Beat3 = static_cast<int32_t>(0x4),
__E_Beat4 = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FilterSettings_AudioReactiveFilter_BeatFilter_Unwrapped () const noexcept {
return static_cast<__FilterSettings_AudioReactiveFilter_BeatFilter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FilterSettings_AudioReactiveFilter_BeatFilter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FilterSettings_AudioReactiveFilter_BeatFilter(int32_t  value__) noexcept;

/// @brief Field Beat1 value: I32(1)
static ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter const Beat1;

/// @brief Field Beat2 value: I32(2)
static ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter const Beat2;

/// @brief Field Beat3 value: I32(4)
static ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter const Beat3;

/// @brief Field Beat4 value: I32(8)
static ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter const Beat4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1542};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter, 0x4>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies System.Object, VROSC.AudioReactive.AudioReactiveFilter::FilterSettings::BeatFilter
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.AudioReactiveFilter/FilterSettings
class CORDL_TYPE AudioReactiveFilter_FilterSettings : public ::System::Object {
public:
// Declarations
using BeatFilter = ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter;

/// @brief Field _chance, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__chance, put=__cordl_internal_set__chance)) int32_t  _chance;

/// @brief Field _cooldown, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__cooldown, put=__cordl_internal_set__cooldown)) int32_t  _cooldown;

/// @brief Field _onCoolDown, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__onCoolDown, put=__cordl_internal_set__onCoolDown)) int32_t  _onCoolDown;

/// @brief Field _reactOn, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__reactOn, put=__cordl_internal_set__reactOn)) ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  _reactOn;

/// @brief Method Filter, addr 0x17d9108, size 0x68, virtual false, abstract: false, final false
inline bool Filter(int32_t  beat) ;

/// @brief Method Instantiate, addr 0x17d9188, size 0x7c, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* Instantiate() ;

static inline ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* New_ctor(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  reactOn, int32_t  chance, int32_t  cooldown) ;

constexpr int32_t const& __cordl_internal_get__chance() const;

constexpr int32_t& __cordl_internal_get__chance() ;

constexpr int32_t const& __cordl_internal_get__cooldown() const;

constexpr int32_t& __cordl_internal_get__cooldown() ;

constexpr int32_t const& __cordl_internal_get__onCoolDown() const;

constexpr int32_t& __cordl_internal_get__onCoolDown() ;

constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter const& __cordl_internal_get__reactOn() const;

constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter& __cordl_internal_get__reactOn() ;

constexpr void __cordl_internal_set__chance(int32_t  value) ;

constexpr void __cordl_internal_set__cooldown(int32_t  value) ;

constexpr void __cordl_internal_set__onCoolDown(int32_t  value) ;

constexpr void __cordl_internal_set__reactOn(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  value) ;

/// @brief Method .ctor, addr 0x17d920c, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  reactOn, int32_t  chance, int32_t  cooldown) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReactiveFilter_FilterSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveFilter_FilterSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReactiveFilter_FilterSettings(AudioReactiveFilter_FilterSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveFilter_FilterSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReactiveFilter_FilterSettings(AudioReactiveFilter_FilterSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1543};

/// @brief Field _reactOn, offset: 0x10, size: 0x4, def value: None
 ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  ____reactOn;

/// @brief Field _chance, offset: 0x14, size: 0x4, def value: None
 int32_t  ____chance;

/// @brief Field _cooldown, offset: 0x18, size: 0x4, def value: None
 int32_t  ____cooldown;

/// @brief Field _onCoolDown, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____onCoolDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings, ____reactOn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings, ____chance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings, ____cooldown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings, ____onCoolDown) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings, 0x20>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.AudioReactiveFilter
class CORDL_TYPE AudioReactiveFilter : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using FilterSettings = ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings;

/// @brief Field _filterSettings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterSettings, put=__cordl_internal_set__filterSettings)) ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*  _filterSettings;

/// @brief Method Filter, addr 0x17d90f0, size 0x18, virtual false, abstract: false, final false
inline bool Filter(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*  filterSettings, int32_t  beat) ;

/// @brief Method Get, addr 0x17d9170, size 0x18, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* Get() ;

static inline ::VROSC::AudioReactive::AudioReactiveFilter* New_ctor() ;

constexpr ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* const& __cordl_internal_get__filterSettings() const;

constexpr ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*& __cordl_internal_get__filterSettings() ;

constexpr void __cordl_internal_set__filterSettings(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*  value) ;

/// @brief Method .ctor, addr 0x17d9204, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReactiveFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReactiveFilter(AudioReactiveFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReactiveFilter(AudioReactiveFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1544};

/// @brief Field _filterSettings, offset: 0x18, size: 0x8, def value: None
 ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*  ____filterSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveFilter, ____filterSettings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::AudioReactiveFilter, 0x20>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter, "VROSC.AudioReactive", "AudioReactiveFilter/FilterSettings/BeatFilter");
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveFilter*, "VROSC.AudioReactive", "AudioReactiveFilter");
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*, "VROSC.AudioReactive", "AudioReactiveFilter/FilterSettings");
