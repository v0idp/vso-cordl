#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsEvent)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Analytics {
struct AnalyticsResult;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class AnalyticsEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::AnalyticsEvent);
// Dependencies System.Object
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.AnalyticsEvent
class CORDL_TYPE AnalyticsEvent : public ::System::Object {
public:
// Declarations
/// @brief Field _debugMode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__debugMode, put=setStaticF__debugMode)) bool  _debugMode;

/// @brief Field enumRenameTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_enumRenameTable, put=setStaticF_enumRenameTable)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  enumRenameTable;

/// @brief Field k_SdkVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_SdkVersion, put=setStaticF_k_SdkVersion)) ::StringW  k_SdkVersion;

/// @brief Field m_EventData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_EventData, put=setStaticF_m_EventData)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  m_EventData;

/// @brief Field s_StandardEventCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StandardEventCallback, put=setStaticF_s_StandardEventCallback)) ::System::Action_1<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>*  s_StandardEventCallback;

/// @brief Method AddCustomEventData, addr 0x2d95fe0, size 0x3a8, virtual false, abstract: false, final false
static inline void AddCustomEventData(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData) ;

/// @brief Method Custom, addr 0x2d96388, size 0x8d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult Custom(::StringW  eventName, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData) ;

/// @brief Method OnValidationFailed, addr 0x2d95f9c, size 0x44, virtual false, abstract: false, final false
static inline void OnValidationFailed(::StringW  message) ;

/// @brief Method ScreenVisit, addr 0x2d96c58, size 0x158, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult ScreenVisit(::StringW  screenName, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData) ;

/// @brief Method TutorialComplete, addr 0x2d96db0, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult TutorialComplete(::StringW  tutorialId, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData) ;

/// @brief Method TutorialSkip, addr 0x2d96ee0, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult TutorialSkip(::StringW  tutorialId, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData) ;

/// @brief Method TutorialStart, addr 0x2d97010, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult TutorialStart(::StringW  tutorialId, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData) ;

/// @brief Method TutorialStep, addr 0x2d97140, size 0x19c, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult TutorialStep(int32_t  stepIndex, ::StringW  tutorialId, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData) ;

/// @brief Method <s_StandardEventCallback>m__0, addr 0x2d97644, size 0x4, virtual false, abstract: false, final false
static inline void _s_StandardEventCallback_m__0(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  _cordl_fixed_empty_name_whitespace) ;

static inline bool getStaticF__debugMode() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_enumRenameTable() ;

static inline ::StringW getStaticF_k_SdkVersion() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_m_EventData() ;

static inline ::System::Action_1<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>* getStaticF_s_StandardEventCallback() ;

/// @brief Method get_debugMode, addr 0x2d95f44, size 0x58, virtual false, abstract: false, final false
static inline bool get_debugMode() ;

static inline void setStaticF__debugMode(bool  value) ;

static inline void setStaticF_enumRenameTable(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_k_SdkVersion(::StringW  value) ;

static inline void setStaticF_m_EventData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

static inline void setStaticF_s_StandardEventCallback(::System::Action_1<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsEvent(AnalyticsEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsEvent(AnalyticsEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12498};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::AnalyticsEvent, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::AnalyticsEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsEvent*, "UnityEngine.Analytics", "AnalyticsEvent");
