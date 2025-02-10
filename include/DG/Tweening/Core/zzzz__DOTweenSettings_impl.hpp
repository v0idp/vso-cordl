#pragma once
// IWYU pragma private; include "DG/Tweening/Core/DOTweenSettings.hpp"
#include "DG/Tweening/Core/Enums/zzzz__NestedTweenFailureBehaviour_impl.hpp"
#include "DG/Tweening/Core/Enums/zzzz__RewindCallbackMode_impl.hpp"
#include "DG/Tweening/zzzz__AutoPlay_impl.hpp"
#include "DG/Tweening/zzzz__Ease_impl.hpp"
#include "DG/Tweening/zzzz__LogBehaviour_impl.hpp"
#include "DG/Tweening/zzzz__LoopType_impl.hpp"
#include "DG/Tweening/zzzz__UpdateType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "DG/Tweening/Core/zzzz__DOTweenSettings_def.hpp"
#include "DG/Tweening/Core/zzzz__DOTweenSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Core::DOTweenSettings_SettingsLocation::DOTweenSettings_SettingsLocation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::DOTweenSettings_SettingsLocation::DOTweenSettings_SettingsLocation()   {
}
constexpr ::DG::Tweening::Core::DOTweenSettings_SettingsLocation  DG::Tweening::Core::DOTweenSettings_SettingsLocation::AssetsDirectory{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::Core::DOTweenSettings_SettingsLocation  DG::Tweening::Core::DOTweenSettings_SettingsLocation::DOTweenDirectory{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::Core::DOTweenSettings_SettingsLocation  DG::Tweening::Core::DOTweenSettings_SettingsLocation::DemigiantDirectory{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Core::DOTweenSettings_SafeModeOptions::*)()>(&::DG::Tweening::Core::DOTweenSettings_SafeModeOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e60c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour& DG::Tweening::Core::DOTweenSettings_SafeModeOptions::__cordl_internal_get_nestedTweenFailureBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nestedTweenFailureBehaviour;
}
constexpr ::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour const& DG::Tweening::Core::DOTweenSettings_SafeModeOptions::__cordl_internal_get_nestedTweenFailureBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nestedTweenFailureBehaviour;
}
constexpr void DG::Tweening::Core::DOTweenSettings_SafeModeOptions::__cordl_internal_set_nestedTweenFailureBehaviour(::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nestedTweenFailureBehaviour = value;
}
inline void DG::Tweening::Core::DOTweenSettings_SafeModeOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions* DG::Tweening::Core::DOTweenSettings_SafeModeOptions::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions::DOTweenSettings_SafeModeOptions()   {
}
//  Writing Method size for method: ::DG::Tweening::Core::DOTweenSettings_ModulesSetup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Core::DOTweenSettings_ModulesSetup::*)()>(&::DG::Tweening::Core::DOTweenSettings_ModulesSetup::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18e60c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::DOTweenSettings_ModulesSetup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_showPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPanel;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_showPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPanel;
}
constexpr void DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_set_showPanel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showPanel = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_audioEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioEnabled;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_audioEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioEnabled;
}
constexpr void DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_set_audioEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioEnabled = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_physicsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicsEnabled;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_physicsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicsEnabled;
}
constexpr void DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_set_physicsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___physicsEnabled = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_physics2DEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physics2DEnabled;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_physics2DEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physics2DEnabled;
}
constexpr void DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_set_physics2DEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___physics2DEnabled = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_spriteEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spriteEnabled;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_spriteEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spriteEnabled;
}
constexpr void DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_set_spriteEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spriteEnabled = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_uiEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiEnabled;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_uiEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiEnabled;
}
constexpr void DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_set_uiEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uiEnabled = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_textMeshProEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textMeshProEnabled;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_textMeshProEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textMeshProEnabled;
}
constexpr void DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_set_textMeshProEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textMeshProEnabled = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_tk2DEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tk2DEnabled;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_get_tk2DEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tk2DEnabled;
}
constexpr void DG::Tweening::Core::DOTweenSettings_ModulesSetup::__cordl_internal_set_tk2DEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tk2DEnabled = value;
}
inline void DG::Tweening::Core::DOTweenSettings_ModulesSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::DOTweenSettings_ModulesSetup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DG::Tweening::Core::DOTweenSettings_ModulesSetup* DG::Tweening::Core::DOTweenSettings_ModulesSetup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Core::DOTweenSettings_ModulesSetup*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::DOTweenSettings_ModulesSetup::DOTweenSettings_ModulesSetup()   {
}
//  Writing Method size for method: ::DG::Tweening::Core::DOTweenSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Core::DOTweenSettings::*)()>(&::DG::Tweening::Core::DOTweenSettings::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18e5fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::DOTweenSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_useSafeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSafeMode;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_useSafeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSafeMode;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_useSafeMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSafeMode = value;
}
constexpr ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_safeModeOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safeModeOptions;
}
constexpr ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions* const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_safeModeOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safeModeOptions;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_safeModeOptions(::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___safeModeOptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_timeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeScale;
}
constexpr float_t const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_timeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeScale;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_timeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeScale = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_useSmoothDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSmoothDeltaTime;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_useSmoothDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSmoothDeltaTime;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_useSmoothDeltaTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSmoothDeltaTime = value;
}
constexpr float_t& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_maxSmoothUnscaledTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSmoothUnscaledTime;
}
constexpr float_t const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_maxSmoothUnscaledTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSmoothUnscaledTime;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_maxSmoothUnscaledTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSmoothUnscaledTime = value;
}
constexpr ::DG::Tweening::Core::Enums::RewindCallbackMode& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_rewindCallbackMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewindCallbackMode;
}
constexpr ::DG::Tweening::Core::Enums::RewindCallbackMode const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_rewindCallbackMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewindCallbackMode;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_rewindCallbackMode(::DG::Tweening::Core::Enums::RewindCallbackMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rewindCallbackMode = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_showUnityEditorReport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showUnityEditorReport;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_showUnityEditorReport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showUnityEditorReport;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_showUnityEditorReport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showUnityEditorReport = value;
}
constexpr ::DG::Tweening::LogBehaviour& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_logBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logBehaviour;
}
constexpr ::DG::Tweening::LogBehaviour const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_logBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logBehaviour;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_logBehaviour(::DG::Tweening::LogBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logBehaviour = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_drawGizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawGizmos;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_drawGizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawGizmos;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_drawGizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawGizmos = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultRecyclable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultRecyclable;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultRecyclable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultRecyclable;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_defaultRecyclable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultRecyclable = value;
}
constexpr ::DG::Tweening::AutoPlay& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultAutoPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAutoPlay;
}
constexpr ::DG::Tweening::AutoPlay const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultAutoPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAutoPlay;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_defaultAutoPlay(::DG::Tweening::AutoPlay  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultAutoPlay = value;
}
constexpr ::DG::Tweening::UpdateType& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultUpdateType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUpdateType;
}
constexpr ::DG::Tweening::UpdateType const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultUpdateType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultUpdateType;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_defaultUpdateType(::DG::Tweening::UpdateType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultUpdateType = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultTimeScaleIndependent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTimeScaleIndependent;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultTimeScaleIndependent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTimeScaleIndependent;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_defaultTimeScaleIndependent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultTimeScaleIndependent = value;
}
constexpr ::DG::Tweening::Ease& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultEaseType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultEaseType;
}
constexpr ::DG::Tweening::Ease const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultEaseType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultEaseType;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_defaultEaseType(::DG::Tweening::Ease  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultEaseType = value;
}
constexpr float_t& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultEaseOvershootOrAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultEaseOvershootOrAmplitude;
}
constexpr float_t const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultEaseOvershootOrAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultEaseOvershootOrAmplitude;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_defaultEaseOvershootOrAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultEaseOvershootOrAmplitude = value;
}
constexpr float_t& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultEasePeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultEasePeriod;
}
constexpr float_t const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultEasePeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultEasePeriod;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_defaultEasePeriod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultEasePeriod = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultAutoKill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAutoKill;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultAutoKill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAutoKill;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_defaultAutoKill(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultAutoKill = value;
}
constexpr ::DG::Tweening::LoopType& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultLoopType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLoopType;
}
constexpr ::DG::Tweening::LoopType const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_defaultLoopType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLoopType;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_defaultLoopType(::DG::Tweening::LoopType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLoopType = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_debugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_debugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_debugMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMode = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_debugStoreTargetId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugStoreTargetId;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_debugStoreTargetId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugStoreTargetId;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_debugStoreTargetId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugStoreTargetId = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_showPreviewPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPreviewPanel;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_showPreviewPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPreviewPanel;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_showPreviewPanel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showPreviewPanel = value;
}
constexpr ::DG::Tweening::Core::DOTweenSettings_SettingsLocation& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_storeSettingsLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeSettingsLocation;
}
constexpr ::DG::Tweening::Core::DOTweenSettings_SettingsLocation const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_storeSettingsLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeSettingsLocation;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_storeSettingsLocation(::DG::Tweening::Core::DOTweenSettings_SettingsLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeSettingsLocation = value;
}
constexpr ::DG::Tweening::Core::DOTweenSettings_ModulesSetup*& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_modules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modules;
}
constexpr ::DG::Tweening::Core::DOTweenSettings_ModulesSetup* const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_modules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modules;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_modules(::DG::Tweening::Core::DOTweenSettings_ModulesSetup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_showPlayingTweens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPlayingTweens;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_showPlayingTweens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPlayingTweens;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_showPlayingTweens(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showPlayingTweens = value;
}
constexpr bool& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_showPausedTweens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPausedTweens;
}
constexpr bool const& DG::Tweening::Core::DOTweenSettings::__cordl_internal_get_showPausedTweens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPausedTweens;
}
constexpr void DG::Tweening::Core::DOTweenSettings::__cordl_internal_set_showPausedTweens(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showPausedTweens = value;
}
inline void DG::Tweening::Core::DOTweenSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::DOTweenSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DG::Tweening::Core::DOTweenSettings* DG::Tweening::Core::DOTweenSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Core::DOTweenSettings*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::DOTweenSettings::DOTweenSettings()   {
}
