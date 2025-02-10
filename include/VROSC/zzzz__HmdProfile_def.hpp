#pragma once
// IWYU pragma private; include "VROSC/HmdProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "VROSC/zzzz__HmdModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HmdProfile)
namespace VROSC {
struct HmdModel;
}
// Forward declare root types
namespace VROSC {
class HmdProfile;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HmdProfile);
// Dependencies UnityEngine.ScriptableObject, VROSC.HmdModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HmdProfile
class CORDL_TYPE HmdProfile : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_HmdModel)) ::VROSC::HmdModel  HmdModel;

 __declspec(property(get=get_MicrophoneLatency)) float_t  MicrophoneLatency;

 __declspec(property(get=get_MicrophoneName)) ::StringW  MicrophoneName;

 __declspec(property(get=get_MicrophonePeakValue)) float_t  MicrophonePeakValue;

 __declspec(property(get=get_SameNameIndex)) int32_t  SameNameIndex;

 __declspec(property(get=get_SteamModelName)) ::StringW  SteamModelName;

/// @brief Field _hmdModel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__hmdModel, put=__cordl_internal_set__hmdModel)) ::VROSC::HmdModel  _hmdModel;

/// @brief Field _microphoneLatency, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__microphoneLatency, put=__cordl_internal_set__microphoneLatency)) float_t  _microphoneLatency;

/// @brief Field _microphoneName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneName, put=__cordl_internal_set__microphoneName)) ::StringW  _microphoneName;

/// @brief Field _microphonePeakValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__microphonePeakValue, put=__cordl_internal_set__microphonePeakValue)) float_t  _microphonePeakValue;

/// @brief Field _sameNameIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__sameNameIndex, put=__cordl_internal_set__sameNameIndex)) int32_t  _sameNameIndex;

/// @brief Field _steamModelName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__steamModelName, put=__cordl_internal_set__steamModelName)) ::StringW  _steamModelName;

static inline ::VROSC::HmdProfile* New_ctor() ;

constexpr ::VROSC::HmdModel const& __cordl_internal_get__hmdModel() const;

constexpr ::VROSC::HmdModel& __cordl_internal_get__hmdModel() ;

constexpr float_t const& __cordl_internal_get__microphoneLatency() const;

constexpr float_t& __cordl_internal_get__microphoneLatency() ;

constexpr ::StringW const& __cordl_internal_get__microphoneName() const;

constexpr ::StringW& __cordl_internal_get__microphoneName() ;

constexpr float_t const& __cordl_internal_get__microphonePeakValue() const;

constexpr float_t& __cordl_internal_get__microphonePeakValue() ;

constexpr int32_t const& __cordl_internal_get__sameNameIndex() const;

constexpr int32_t& __cordl_internal_get__sameNameIndex() ;

constexpr ::StringW const& __cordl_internal_get__steamModelName() const;

constexpr ::StringW& __cordl_internal_get__steamModelName() ;

constexpr void __cordl_internal_set__hmdModel(::VROSC::HmdModel  value) ;

constexpr void __cordl_internal_set__microphoneLatency(float_t  value) ;

constexpr void __cordl_internal_set__microphoneName(::StringW  value) ;

constexpr void __cordl_internal_set__microphonePeakValue(float_t  value) ;

constexpr void __cordl_internal_set__sameNameIndex(int32_t  value) ;

constexpr void __cordl_internal_set__steamModelName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1883e80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HmdModel, addr 0x1883e50, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::HmdModel get_HmdModel() ;

/// @brief Method get_MicrophoneLatency, addr 0x1883e68, size 0x8, virtual false, abstract: false, final false
inline float_t get_MicrophoneLatency() ;

/// @brief Method get_MicrophoneName, addr 0x1883e58, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MicrophoneName() ;

/// @brief Method get_MicrophonePeakValue, addr 0x1883e70, size 0x8, virtual false, abstract: false, final false
inline float_t get_MicrophonePeakValue() ;

/// @brief Method get_SameNameIndex, addr 0x1883e60, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SameNameIndex() ;

/// @brief Method get_SteamModelName, addr 0x1883e78, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SteamModelName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HmdProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HmdProfile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HmdProfile(HmdProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HmdProfile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HmdProfile(HmdProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{591};

/// @brief Field _hmdModel, offset: 0x18, size: 0x4, def value: None
 ::VROSC::HmdModel  ____hmdModel;

/// @brief Field _microphoneName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____microphoneName;

/// @brief Field _sameNameIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ____sameNameIndex;

/// @brief Field _microphoneLatency, offset: 0x2c, size: 0x4, def value: None
 float_t  ____microphoneLatency;

/// @brief Field _microphonePeakValue, offset: 0x30, size: 0x4, def value: None
 float_t  ____microphonePeakValue;

/// @brief Field _steamModelName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____steamModelName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HmdProfile, ____hmdModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::HmdProfile, ____microphoneName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::HmdProfile, ____sameNameIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::HmdProfile, ____microphoneLatency) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::HmdProfile, ____microphonePeakValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::HmdProfile, ____steamModelName) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HmdProfile, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HmdProfile);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HmdProfile*, "VROSC", "HmdProfile");
