#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteParticles.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__NoteBoardNoteParticles_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteAnimator_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteParticles_def.hpp"
//  Writing Method size for method: ::VROSC::NoteBoardNoteParticles_Emission._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteParticles_Emission::*)(::UnityEngine::ParticleSystem*, float_t, float_t, ::UnityEngine::Transform*)>(&::VROSC::NoteBoardNoteParticles_Emission::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x17b1720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles_Emission*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteParticles_Emission.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteParticles_Emission::*)(int32_t, ::UnityEngine::Color)>(&::VROSC::NoteBoardNoteParticles_Emission::Update)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x17b1908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles_Emission*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__rate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rate;
}
constexpr float_t const& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__rate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rate;
}
constexpr void VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_set__rate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rate = value;
}
constexpr float_t& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr float_t const& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_set__size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
constexpr float_t& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__coolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coolDown;
}
constexpr float_t const& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__coolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coolDown;
}
constexpr void VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_set__coolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coolDown = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr void VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__emitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_get__emitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitter;
}
constexpr void VROSC::NoteBoardNoteParticles_Emission::__cordl_internal_set__emitter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emitter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::NoteBoardNoteParticles_Emission::_ctor(::UnityEngine::ParticleSystem*  particleSystem, float_t  rate, float_t  size, ::UnityEngine::Transform*  emitter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles_Emission*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem, rate, size, emitter);
}
inline void VROSC::NoteBoardNoteParticles_Emission::Update(int32_t  multiplier, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles_Emission*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplier, color);
}
inline ::VROSC::NoteBoardNoteParticles_Emission* VROSC::NoteBoardNoteParticles_Emission::New_ctor(::UnityEngine::ParticleSystem*  particleSystem, float_t  rate, float_t  size, ::UnityEngine::Transform*  emitter)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoardNoteParticles_Emission*>(particleSystem, rate, size, emitter));
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardNoteParticles_Emission::NoteBoardNoteParticles_Emission()   {
}
//  Writing Method size for method: ::VROSC::NoteBoardNoteParticles.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteParticles::*)()>(&::VROSC::NoteBoardNoteParticles::Awake)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x17b15d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteParticles.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteParticles::*)()>(&::VROSC::NoteBoardNoteParticles::Update)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x17b1764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteParticles.GetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::NoteBoardNoteParticles::*)(::UnityEngine::Color)>(&::VROSC::NoteBoardNoteParticles::GetColor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17b1888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteParticles.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteParticles::*)()>(&::VROSC::NoteBoardNoteParticles::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17b1a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardNoteParticles._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardNoteParticles::*)()>(&::VROSC::NoteBoardNoteParticles::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b1abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteBoardNoteAnimator>& VROSC::NoteBoardNoteParticles::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::VROSC::NoteBoardNoteAnimator> const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__target(::UnityW<::VROSC::NoteBoardNoteAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::NoteBoardNoteParticles::__cordl_internal_get__rate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rate;
}
constexpr float_t const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__rate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rate;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__rate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rate = value;
}
constexpr float_t& VROSC::NoteBoardNoteParticles::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr float_t const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
constexpr int32_t& VROSC::NoteBoardNoteParticles::__cordl_internal_get__multiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplier;
}
constexpr int32_t const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__multiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplier;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__multiplier(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____multiplier = value;
}
constexpr bool& VROSC::NoteBoardNoteParticles::__cordl_internal_get__useRandomColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useRandomColor;
}
constexpr bool const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__useRandomColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useRandomColor;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__useRandomColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useRandomColor = value;
}
constexpr ::UnityEngine::Gradient*& VROSC::NoteBoardNoteParticles::__cordl_internal_get__randomColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomColor;
}
constexpr ::UnityEngine::Gradient* const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__randomColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomColor;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__randomColor(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::NoteBoardNoteParticles::__cordl_internal_get__remap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remap;
}
constexpr bool const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__remap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remap;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__remap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remap = value;
}
constexpr ::UnityEngine::Color& VROSC::NoteBoardNoteParticles::__cordl_internal_get__remapR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapR;
}
constexpr ::UnityEngine::Color const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__remapR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapR;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__remapR(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remapR = value;
}
constexpr ::UnityEngine::Color& VROSC::NoteBoardNoteParticles::__cordl_internal_get__remapG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapG;
}
constexpr ::UnityEngine::Color const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__remapG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapG;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__remapG(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remapG = value;
}
constexpr ::UnityEngine::Color& VROSC::NoteBoardNoteParticles::__cordl_internal_get__remapB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapB;
}
constexpr ::UnityEngine::Color const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__remapB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapB;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__remapB(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remapB = value;
}
constexpr ::VROSC::NoteBoardNoteParticles_Emission*& VROSC::NoteBoardNoteParticles::__cordl_internal_get__red()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____red;
}
constexpr ::VROSC::NoteBoardNoteParticles_Emission* const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__red() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____red;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__red(::VROSC::NoteBoardNoteParticles_Emission*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____red)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& VROSC::NoteBoardNoteParticles::__cordl_internal_get__particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& VROSC::NoteBoardNoteParticles::__cordl_internal_get__particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr void VROSC::NoteBoardNoteParticles::__cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::NoteBoardNoteParticles::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNoteParticles::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Color VROSC::NoteBoardNoteParticles::GetColor(::UnityEngine::Color  normalColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, normalColor);
}
inline void VROSC::NoteBoardNoteParticles::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardNoteParticles::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardNoteParticles*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteBoardNoteParticles* VROSC::NoteBoardNoteParticles::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoardNoteParticles*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardNoteParticles::NoteBoardNoteParticles()   {
}
