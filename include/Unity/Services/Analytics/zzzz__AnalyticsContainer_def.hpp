#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/AnalyticsContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Analytics/zzzz__IAnalyticsContainer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnalyticsContainer)
namespace Unity::Services::Analytics {
class AnalyticsServiceInstance;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Unity::Services::Analytics {
class AnalyticsContainer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::AnalyticsContainer);
// Dependencies Unity.Services.Analytics.IAnalyticsContainer, UnityEngine.MonoBehaviour
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.AnalyticsContainer
class CORDL_TYPE AnalyticsContainer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AutoFlushPeriod)) float_t  AutoFlushPeriod;

 __declspec(property(get=get_TimeUntilHeartbeat)) float_t  TimeUntilHeartbeat;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::Unity::Services::Analytics::AnalyticsContainer>  _Instance_k__BackingField;

/// @brief Field m_AutoFlushTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AutoFlushTime, put=__cordl_internal_set_m_AutoFlushTime)) float_t  m_AutoFlushTime;

/// @brief Field m_GameRunningTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GameRunningTime, put=__cordl_internal_set_m_GameRunningTime)) float_t  m_GameRunningTime;

/// @brief Field m_Service, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Service, put=__cordl_internal_set_m_Service)) ::Unity::Services::Analytics::AnalyticsServiceInstance*  m_Service;

/// @brief Field s_Container, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Container, put=setStaticF_s_Container)) ::UnityW<::UnityEngine::GameObject>  s_Container;

/// @brief Field s_Created, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_Created, put=setStaticF_s_Created)) bool  s_Created;

/// @brief Convert operator to "::Unity::Services::Analytics::IAnalyticsContainer"
constexpr operator  ::Unity::Services::Analytics::IAnalyticsContainer*() noexcept;

/// @brief Method CreateContainer, addr 0x2e8af68, size 0x1a4, virtual false, abstract: false, final false
static inline ::UnityW<::Unity::Services::Analytics::AnalyticsContainer> CreateContainer() ;

/// @brief Method Disable, addr 0x2e8edb0, size 0x20, virtual true, abstract: false, final true
inline void Disable() ;

/// @brief Method Enable, addr 0x2e8eda4, size 0xc, virtual true, abstract: false, final true
inline void Enable() ;

/// @brief Method Initialize, addr 0x2e8b570, size 0x10, virtual true, abstract: false, final true
inline void Initialize(::Unity::Services::Analytics::AnalyticsServiceInstance*  service) ;

static inline ::Unity::Services::Analytics::AnalyticsContainer* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x2e8ee54, size 0x1c, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  paused) ;

/// @brief Method OnDestroy, addr 0x2e8ee70, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Update, addr 0x2e8edd0, size 0x84, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_m_AutoFlushTime() const;

constexpr float_t& __cordl_internal_get_m_AutoFlushTime() ;

constexpr float_t const& __cordl_internal_get_m_GameRunningTime() const;

constexpr float_t& __cordl_internal_get_m_GameRunningTime() ;

constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance* const& __cordl_internal_get_m_Service() const;

constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance*& __cordl_internal_get_m_Service() ;

constexpr void __cordl_internal_set_m_AutoFlushTime(float_t  value) ;

constexpr void __cordl_internal_set_m_GameRunningTime(float_t  value) ;

constexpr void __cordl_internal_set_m_Service(::Unity::Services::Analytics::AnalyticsServiceInstance*  value) ;

/// @brief Method .ctor, addr 0x2e8eed0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Unity::Services::Analytics::AnalyticsContainer> getStaticF__Instance_k__BackingField() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_s_Container() ;

static inline bool getStaticF_s_Created() ;

/// @brief Method get_AutoFlushPeriod, addr 0x2e8ecc8, size 0x2c, virtual false, abstract: false, final false
inline float_t get_AutoFlushPeriod() ;

/// @brief Method get_Instance, addr 0x2e8ecf4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Unity::Services::Analytics::AnalyticsContainer> get_Instance() ;

/// @brief Method get_TimeUntilHeartbeat, addr 0x2e8ed88, size 0x1c, virtual false, abstract: false, final false
inline float_t get_TimeUntilHeartbeat() ;

/// @brief Convert to "::Unity::Services::Analytics::IAnalyticsContainer"
constexpr ::Unity::Services::Analytics::IAnalyticsContainer* i___Unity__Services__Analytics__IAnalyticsContainer() noexcept;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::Unity::Services::Analytics::AnalyticsContainer>  value) ;

static inline void setStaticF_s_Container(::UnityW<::UnityEngine::GameObject>  value) ;

static inline void setStaticF_s_Created(bool  value) ;

/// @brief Method set_Instance, addr 0x2e8ed3c, size 0x4c, virtual false, abstract: false, final false
static inline void set_Instance(::Unity::Services::Analytics::AnalyticsContainer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsContainer(AnalyticsContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsContainer(AnalyticsContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11857};

/// @brief Field k_AutoFlushPeriod offset 0xffffffff size 0x4
static constexpr float_t  k_AutoFlushPeriod{static_cast<float_t>(60.0f)};

/// @brief Field k_GameRunningPeriod offset 0xffffffff size 0x4
static constexpr float_t  k_GameRunningPeriod{static_cast<float_t>(60.0f)};

/// @brief Field m_AutoFlushTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_AutoFlushTime;

/// @brief Field m_GameRunningTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_GameRunningTime;

/// @brief Field m_Service, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Analytics::AnalyticsServiceInstance*  ___m_Service;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::AnalyticsContainer, ___m_AutoFlushTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsContainer, ___m_GameRunningTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsContainer, ___m_Service) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::AnalyticsContainer, 0x30>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::AnalyticsContainer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::AnalyticsContainer*, "Unity.Services.Analytics", "AnalyticsContainer");
