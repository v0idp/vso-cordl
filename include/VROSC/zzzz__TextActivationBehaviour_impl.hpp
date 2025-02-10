#pragma once
// IWYU pragma private; include "VROSC/TextActivationBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "VROSC/zzzz__TextActivationBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::VROSC::TextActivationBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextActivationBehaviour::*)(::TMPro::TextMeshPro*, ::StringW)>(&::VROSC::TextActivationBehaviour::Setup)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x176cc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshPro*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextActivationBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextActivationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::TextActivationBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x176ce04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextActivationBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextActivationBehaviour::*)()>(&::VROSC::TextActivationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176d118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::TextActivationBehaviour::__cordl_internal_get__textMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::TextActivationBehaviour::__cordl_internal_get__textMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr void VROSC::TextActivationBehaviour::__cordl_internal_set__textMesh(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::TextActivationBehaviour::__cordl_internal_get_Activation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Activation;
}
constexpr float_t const& VROSC::TextActivationBehaviour::__cordl_internal_get_Activation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Activation;
}
constexpr void VROSC::TextActivationBehaviour::__cordl_internal_set_Activation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Activation = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& VROSC::TextActivationBehaviour::__cordl_internal_get__vertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& VROSC::TextActivationBehaviour::__cordl_internal_get__vertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertices;
}
constexpr void VROSC::TextActivationBehaviour::__cordl_internal_set__vertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& VROSC::TextActivationBehaviour::__cordl_internal_get__endVertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endVertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& VROSC::TextActivationBehaviour::__cordl_internal_get__endVertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endVertices;
}
constexpr void VROSC::TextActivationBehaviour::__cordl_internal_set__endVertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____endVertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& VROSC::TextActivationBehaviour::__cordl_internal_get__posOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& VROSC::TextActivationBehaviour::__cordl_internal_get__posOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr void VROSC::TextActivationBehaviour::__cordl_internal_set__posOffset(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____posOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::TextActivationBehaviour::__cordl_internal_get_Deviation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deviation;
}
constexpr float_t const& VROSC::TextActivationBehaviour::__cordl_internal_get_Deviation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deviation;
}
constexpr void VROSC::TextActivationBehaviour::__cordl_internal_set_Deviation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Deviation = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::TextActivationBehaviour::__cordl_internal_get_DeviationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::TextActivationBehaviour::__cordl_internal_get_DeviationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviationCurve;
}
constexpr void VROSC::TextActivationBehaviour::__cordl_internal_set_DeviationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeviationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::TextActivationBehaviour::Setup(::TMPro::TextMeshPro*  textMesh, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshPro*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textMesh, text);
}
inline void VROSC::TextActivationBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::TextActivationBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TextActivationBehaviour* VROSC::TextActivationBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TextActivationBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::TextActivationBehaviour::TextActivationBehaviour()   {
}
